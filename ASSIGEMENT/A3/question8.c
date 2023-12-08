/**
 * Programmer:tanisha
 * Desc: Sorted Array In Ascending Order.
 * Date: 15/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h> 

int main() {
	int n, temp;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		} // end for
	} // end for
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	} // end for
	return 1;
} // end main
