QUESTION;1
  // Online C compiler to run C program online
#include <stdio.h>
int main() {
  int digit1 = 0;
  int digit2 = 0;
  printf("==taking inputs==\n");
  printf("enter digit1:  ");
  scanf("%d", &digit1);
  printf("enter digit2:  ");
  scanf("%d",&digit2);
  
  printf("addition answer");
  int addition = digit1 + digit2;
  printf("answer :%d",addition);
  
  printf("multiplication answer");
  int multiplication = digit1*digit2;
  printf("answer  :%d" ,multiplication);
  
  printf("subtraction answer");
  int subtraction = digit1-digit2;
  printf("answer   :%d" ,subtraction);
  
  printf("division answer");
  int division = digit1/digit2;
  printf("answer   ;%d" ,division);
  return 0;
}
 
