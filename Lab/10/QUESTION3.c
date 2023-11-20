#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void prime(int ** ptr,int rows,int cols);
 bool isPrime(int n);
int main()
{
    int **ptr;
    int rows,cols;
    printf("enter no of rows and cols: \n");
    scanf("%d%d",&rows,&cols);
    ptr=(int**)malloc(rows * sizeof(int*));
    
    for(int i=0;i<rows;i++) {
       *(ptr+i)=(int*)malloc(cols * sizeof(int));
    }




prime(ptr,rows,cols);
for(int i =0;i<rows;i++) {
    for(int j=0;j<cols;j++) {
        printf("%d ", *(*(ptr+i)+j));
    }
    printf("\n");
}
    for (int i = 0; i < rows; i++) {
        free(ptr[i]);
    }
    free(ptr); 

    return 0;
}
void prime(int ** ptr,int rows,int cols) {
     int num = 2;
     for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j=j) {
        if (isPrime(num)) {
            *(*(ptr+i)+j) = num;
            j++;  
        }
        num++;
    }
    }

}  
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
