 
/*
*programmer; Tanisha 
*Date: 12sep2023
*description: This program prints n  number of "*" 
*/
// Include Files--//
#include <stdio.h>
#include <stdlib.h> 

 int main(){
         int n;
        // Input the value of n 
         printf("Enter the value of n:");
         scanf("%d",&n);
        int i=1,j=1;
   for (i=0;i<=n;i++){
     for(j=0;j<i;j++){
     		printf("*");
	}
	printf("\n");
    }
     
} 
