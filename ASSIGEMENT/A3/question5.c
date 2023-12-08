/**
 * Programmer: Muhammed Owais 
 * Desc: Printing man in hat
 * Date: 16/10/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>

void hat(int n);
void eyes(int n);
void nose(int n);
void smile_neck(int n);
void body(int n);
void legs(int n);
void foot(int n);
int main() {
	int n;
	printf("Enter A Number: ");
	scanf("%d", &n);
	hat(n);
	printf("\n");
	eyes(n);
	printf("\n");
	nose(n);
	printf("\n");
	smile_neck(n);
	printf("\n");
	body(n);
	legs(n);
	printf("\n");
	foot(n);
}

void hat(int n) {
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			printf(" ");
		}
		for (int a = 0; a < n; ++a)
		{
			printf("*");
		}
		printf("\n");
	}
	printf(" ");
	for (int i = 0; i < (n + (n-2)*2); ++i)
	{
		printf("*");
	}
}

void eyes(int n) 
{
	for (int i = 0; i < n-1; ++i)
	{
		printf(" ");
	}
	printf("*");
	for (int j = 0; j < n-2; ++j)
	{
		printf(" ");
	}
	printf("*");
}
void nose(int n)
{
	for (int i = 0; i < ((n-1)+n/2); ++i)
	{
		printf(" ");
	}
	printf("|");
}
void smile_neck(int n)
{
	for (int i = 0; i < ((n-1)+n/2)-1; ++i)
	{
		printf(" ");
	}
	printf("\\_/");
	printf("\n\n");
	for (int i = 0; i < ((n-1)+n/2)-1; ++i)
	{
		printf(" ");
	}
	printf("| |");
}
void body(int n)
{
	for (int i = 0; i < (n+(n-2)*2) + 2; ++i)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < n-1; ++i)
	{
		for (int i = 0; i < n-3; ++i)
		{
			printf("*");
		}
		for (int i = 0; i < 2; ++i)
		{
			printf(" ");
		}
		for (int i = 0; i < n; ++i)
		{
			printf("*");
		}
		for (int i = 0; i < 2; ++i)
		{
			printf(" ");
		}
		for (int i = 0; i < n-3; ++i)
		{
			printf("*");
		}
		printf("\n");
	}
}
void legs(int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		printf(" ");
	}
	for (int i = 0; i < n; ++i)
	{
		printf("*");
	}
	for (int i = 0; i < n; ++i)
	{
		printf("\n");
		for (int j = 0; j < n-1; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j< (n-1)/2; ++j)
		{
			printf("*");
		}
		if (n % 2 == 0)
		{
			printf(" ");
		}
		printf(" ");
		for (int j = 0; j < (n-1)/2; ++j)
		{
			printf("*");
		}
	}

}
void foot(int n)
{
	int space = (n - 5) / 2;
    if (space < 0) {
        space = 0;
    }
    for (int i = 0; i < space+1; i++) {
        printf(" ");
    }
	for (int i = 0; i < n; ++i)
	{
		printf("*");
	}
	if (n % 2 == 0)
	{
		printf(" ");
	}
	printf(" ");
	for (int i = 0; i < n; ++i)
	{
		printf("*");
	}
}
