#include <stdio.h>
int main() {
    int day1, month1, year1;
    int day2, month2, year2;
    printf("Enter the date of birth fopr person 1(DD MM YYYY): ");
    scanf("%d %d %d", &day1, &month1, *&year1);
    
    printf("Enter the date of birth for person 2 (DD MM YYYY): ");
    scanf("%d %d %d", &day2, &month2, &year2);
    
    if(year1 < year2){
        printf("person 1 is older.\n");
    }
    else if (year1 > year2){
        printf("person 2 is older.\n");
    }
    else { // if the years are the same, check the months
    if  (month1 < month2){
         printf("person 1 is older.\n");
    }
    else if (month1 > month2){
        printf("person 2 is older.\n");
    }
    else { // if months are the same, check the days 
    if (day1 < day2) {
        printf("person 1 is older.\n");
    }
   else if (day1 > day2) {
       printf("person2 is older.\n");
   }
   else {
       printf("Both persons are of the same age ,\n");
   }
    }
   }
    return 0;
}
  
