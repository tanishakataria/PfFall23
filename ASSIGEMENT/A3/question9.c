/**
 * Programmer: Muhammed Owais 
 * Desc: Branches Mobiles
 * Date: 15/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void totalsOfBranches(int bId, int mId, int arr[bId][mId]);
void maxBill(int bId, int mId, int arr[bId][mId]);
void highestBill(int bId, int mId, int arr[bId][mId]);
int main(){
	int mId, bId;
	printf("Enter the number of branches: ");
	scanf("%d", &bId);
	printf("Enter the number of mobiles: ");
	scanf("%d", &mId);
	int arr[bId][mId];
	for (int i = 0; i < bId; ++i)
	{
		for (int j = 0; j < mId; ++j)
		{
			printf("Enter Mobile %d of Branch %d: ", j+1, i+1);
			scanf("%d", &arr[i][j]);
		} // end for
	} // end for
	totalsOfBranches(bId, mId, arr);
	maxBill(bId, mId, arr);
	highestBill(bId, mId, arr);
	return 1;
} // end main

void totalsOfBranches(int bId, int mId, int arr[bId][mId]){

	int sum;
	int total = 0;
	for (int i = 0; i < bId; ++i)
	{
		sum = 0;
		for (int j = 0; j < mId; ++j)
		{
			sum = sum + arr[i][j];
		}
		printf("Branch %d: %d\n", i+1, sum);
		total = total + sum;
	}
	printf("Total of All Branches: %d\n", total);
}

void maxBill(int bId, int mId,int arr[bId][mId]) {

	int max = arr[0][0];
	int branchId;
	for (int i = 0; i < bId; ++i)
	{
		for (int j = 0; j < mId; ++j)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				branchId = i;
			}
		}
	}
	printf("Max Bill Arrived At Branch %d\n", branchId+1);

}

void highestBill(int bId, int mId, int arr[bId][mId])
{

	int max = arr[0][0];
	int mobileId, branchId;
	for (int i = 0; i < mId; ++i)
	{
		max = 0;
		for (int j = 0; j < bId; ++j)
		{
			if (arr[j][i] > max)
			{
				max = arr[j][i];
				branchId = j;
				mobileId = i;
			}
		}
		printf("Highest Bill of Mobile %d in Branch %d\n",mobileId+1,branchId+1);
	}
}
