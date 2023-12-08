/**
 * Programmer: tanisha
 * Desc: Finding the frequency of numbers in an array
 * Date: 15/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n;
	printf("Enter the Array Size: ");
	scanf("%d", &n);
	int arr[n];
	int arr2[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &arr[i]);
	} 
	for (int i = 0; i < n; ++i)
	{
		int count = 1;
		for (int j = i+1; j < n; ++j)
		{
			if (arr[i] == arr[j] && arr[i] != -1) {
				count++;
				arr[j] = -1;  
			}
		} // end for
		if (arr[i] != -1)
		{
			printf("Frequency of %d = %d\n", arr[i], count);
		} 
	} // end for
	return 1;
} // end main
