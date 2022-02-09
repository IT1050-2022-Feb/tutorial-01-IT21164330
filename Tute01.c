/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float m1,m2;
  printf("enter your marks :");
  scanf("%f%f",&m1,&m2);
  float avg=(m1+m2)/2.0;
  printf("Yor avaerage mark =%.2f",avg);
  return 0;
}

