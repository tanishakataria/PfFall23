#include <stdio.h>

int main (){
    int r,c,i,j;
    printf ("Enter the number of batsman");
    scanf ("%d",&r);
    printf ("Enter the innings of each batsman");
    scanf ("%d",&c);
    int a[r][c];
    //taking input
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            printf ("Enter %d batsmans %d innings",i,j);
            scanf ("%d", &a[i][j]);
        }
    }
    int total_runs = 0;
    int avg_runs;
    int max = a[0][0];
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            total_runs = total_runs + a[i][j];
        }
        printf ("The total runs scored by %d batsman are %d \n",i,total_runs);
        avg_runs = total_runs / c;
        printf ("The avg runs by %d batsman are %d\n",i,avg_runs);
        total_runs = 0;
    }

    for (i=0; i<c; i++){
        for (j=0; j<r; j++){
            if (a[i][j] > max){
               max = a[i][j];                       
            }
        }
      printf ("The highest score in %d innings by %d batsman is %d\n",i,j,max);
    }

    int count_100 = 0;
    int count_50 = 0;
    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
            if (a[i][j] >= 100){
               count_100 = count_100 + 1;
            }
            else if (a[i][j] >= 50 && a[i][j]<100){
                count_50 = count_50 + 1;
            }
        }
    }
    printf ("The number of centuries is %d\n",count_100);
    printf ("The number of half-centuries is %d\n",count_50);  

return 0;
}
