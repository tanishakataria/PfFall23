
#include <stdio.h>

int mul(int N,int n) {
    if(n ==1 ) {
        return N;
    }
    else if(n==0 || N==0) {
        return 0;
    }
    else {
       
        return N+mul(N,n-1);
    
        
    }
}
int main()
{
    int N,n;
    printf("enter number1");
    scanf("%d",&N);
    printf("enter number2");
    scanf("%d",&n);
   printf("the product is %d",mul(N,n));
  
return 0;
}
