#include <stdio.h>

int main() {
   int n;
   printf("Enter the number of integers (n):");
   scanf("%d",&n);
   
   int sum = 0;
   for (int i = 0; i< n;i++) {
       int num;
       printf("Enter integer %d:", i+1);
       scanf("%d",&num );
       sum += (num*num);
   }
   printf("sum of the squares of the entered integers: %d\n",sum);
   return 0;
}
