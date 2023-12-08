/**
 * Programmer: tanisha
 * Desc: Sum of digits
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int n, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}
	printf("Sum of Digits is: %d", sum);
	return 1;
}
