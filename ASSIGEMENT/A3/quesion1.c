/**
 * Programmer:tanisha
 * Desc: Division of two numbers without the division operator
 * Date: 10/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

int main() {
	int num1, num2, i = 0;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	if (num1 > num2) {
		while (num1 > 0) {
			num1 -= num2;
			i++;
		}
	} else if (num2 > num1) {
		while (num2 > 0) {
			num2 -= num1;
			i++;
		}
	}
	printf("%d", i);
}
