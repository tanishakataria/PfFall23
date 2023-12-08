/**
 * Programmer: Muhammed Owais 
 * Desc: Sum from subarrays
 * Date: 16/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main()
{
	int n, s, sum = 0;
	int count = 0;
	printf("Enter The Size of the Array: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Enter A Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter Number S: ");
	scanf("%d", &s);
	int temp = count;
	do
	{
		sum += arr[count];
		if (sum > s) {
			sum = sum - arr[temp];
			temp++;
		}
		count++;
	}
	while (count < n && sum != s);
	if (sum == s)
	{
		printf("The Elements from Index %d to %d when summed results in the output of %d.\n", temp, count-1, s);
	}
	else 
	{
		printf("NOT POSSIBLE\n");
	}
	return 1;
}
