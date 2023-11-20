#include <stdio.h>
int fibb(int i,int j,int n) {
  
    if(n==1) {
         i=0;
        j=1;
    }
    else {
         printf("%d\n",i+j);
        fibb(j,i+j,n-1);
      
    }
}

int main()
{
    int n;
    int i=0;
    int j=1;
    printf("please enter no of elements of fibbonacci series that u want to print");
    scanf("%d",&n);
    if (n>=1) {
     printf("1\n");
    }
 fibb(i,j,n);

    return 0;
}
