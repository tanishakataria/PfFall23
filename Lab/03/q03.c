// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main()
{
    int base,prependicular;
    printf("Enter your base=");
    scanf("%d",&base);
    printf("Enter your perpendicular="); 
    scanf("%d",&prependicular);
    int x = base * base + prependicular * prependicular;
int h= sqrt(x);
    printf("hypotenus = %d" , h);
    return 0 ;
}//end main
