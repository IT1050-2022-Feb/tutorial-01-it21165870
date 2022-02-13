/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total;
  float ave;

  printf("Enter 1 subject mark :");
  scanf("%d",&mark1);

  printf("Enter 2 subject mark :");
  scanf("%d",&mark2);

  total=mark1+mark2;
  
  ave=total/2.0;
  printf("Average is :%.2f",ave);
  return 0;
}

