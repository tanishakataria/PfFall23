#include <stdio.h>

int factorial(int N) {
    if(N ==1 || N==0) {
        return 1;
    }
    else {
       
        return N*factorial(N-1);
        
    }
}
int main()
{
    int N;
    printf("enter number");
    scanf("%d",&N);
   printf("the factorial is %d",factorial(N));
  
return 0;
}
