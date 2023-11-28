/*
* Programmer: TANISHA KATARIA
* Desc: using structures to take input of data, finding desired data, and then applying multipliaction on structures
* Date: 21-11-23
*
*/

#include <stdio.h>

struct box_data {
    int height;
    int width;
    int length;
};

int main (){
    int n;
    printf ("Enter the number of boxes \n");
    scanf ("%d" ,&n);
    struct box_data bd[n];
    int i;
    for (i=0; i<n; i++){
        printf ("Enter the data for box%d \n",i+1);
        printf ("Enter the length of the box \n");
        scanf ("%d \n", &bd[i].length);
        printf ("Enter the width of the box\n");
        scanf ("%d \n", &bd[i].width);
        printf ("Enter the height of the box\n");
        scanf ("%d \n", &bd[i].height);
    }
    for (i=0; i<n; i++){
        if (bd[i].height < 41){
            printf ("%d \n", ((bd[i].height*bd[i].length)*bd[i].width));
        }
    }


    return 0;
}
