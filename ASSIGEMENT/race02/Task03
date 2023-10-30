#include <stdio.h>

int main (){
    //intializing the 2D array
    int a[5][4] = {{1, 300, 0, 0}, {1, 320, 1 , 310}, {0, 0, 1, 280}, {1, 380, 0 ,0}, {1, 375, 1 ,400}};
    //taking prefernce input
    int p;
    //using integers to check for user input
    printf ("Press 1 if you want to book a flight in the morning slot, 2 if you want to book a flight in the evening slot, and 3 if you have a speicifc prefernce for  a day \n");
    scanf ("%d", &p);
    //in case of morning slot
    int i,r = 1;
    int min = a[0][1];
    //comparing user input to the provided inputs for specific code
    if (p == 1){
        for (i=0 ; i<5; i++){ //looping through rows with specified columns for finding flight availability
            if (a[i][0] == 1){ //only running code if flight is avaialble
                printf ("The flight is available on %d day of the week for morning slots only \n", i+1); //outputting the flights available
                if (a[i][1] != 0 && a[i][1] < min){ //finding minimum price to suggest best option to book the flight
                    min = a[i][1]; //comparing the first value of the row and specific column to find miminum
                    r = i+1; //storing the day of the week in r for use outside of loop
                }
             }
     printf ("\nThe best option to book the flight is on %d day of the week for price %d",r,min); //outputting best option to book
        }
    }
    //in case of evening slot
    //comparing user input to the provided inputs for specific code
    else if (p == 2){
    int r = 1;
    int min = a[1][3];
        for (i=0 ; i<5; i++){ //looping through rows with specified columns for finding flight availability
            if (a[i][2] == 1){ //only running code if flight is avaialble
                printf ("The flight is available on %d day of the week for evening slots only \n", i+1); //outputting the flights available
                 if (a[i][3] != 0 && a[i][3] < min){ //finding minimum price to suggest best option to book the flight
                    min = a[i][3]; //comparing the first value of the row and specific column to find miminum
                    r = r + i; //storing the day of the week in r for use outside of loop
                 }
             }
         }
     printf ("\nThe best option to book the flight is on %d day of the week for price %d",r,min); //outputting best option to book
    }
    //in case of specific prefernce for day
    //comparing user input to the provided inputs for specific code
    else if (p == 3){
        int day;
        printf ("Press 1 for Monday, 2 for Tuesday, 3 for Wednesday, 4 for Thursday ,and 5 for Friday"); //giving specified inputs to get the prefernce of day 
        scanf ("%d", &day);
         for (i=0; i<5; i++){ //looping through rows with specified columns for finding flight availability
            if (day == i){ //only runnning code if input value for day is same as the row - specifies days
                if (a[i][0] == 1 && a[i][2] == 1){ //checking if flights are available in both slots
                    printf ("The flight is available for both morning and evening slots on %d day of the week\n",i+1);
                    printf ("The morning flight costs %d and the evening flight costs %d",a[i][1], a[i][3]);
                }
                else if (a[i][0] == 1 && a[i][2] == 0){ //checking if flights are available in morning slots
                    printf ("The flight is available for the morning slot only on %d day of the week \n",i+1);
                    printf ("The flight costs %d ",a[i][1]);
                }
                else if (a[i][0] == 0 && a[i][2] == 1){ //checking if flights are available in evening slots
                    printf ("The flight is available for the evening slot only on %d day of the week\n",i+1);
                    printf ("The flight costs %d ",a[i][3]);
                }
                else { //if both slots unavailable
                    printf ("No flights available on %d day of the week",i+1);
                }
            }
        }
    }
    return 0;
