
#include <stdio.h>
int GCD(a,b) {
    if(b==0) {
        return a;
    }
    else {
      return  GCD(b,a%b);
    }
}
    
    

int main()
{
    int a;
    int b;
    printf("enter number 1: ");
    scanf("%d",&a);
     printf("enter number 2: ");
    scanf("%d",&b);
 
printf ("GCD IS %d",GCD(a,b));
    return 0;
}
