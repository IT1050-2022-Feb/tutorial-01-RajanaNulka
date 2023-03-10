/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
// this program is input two marks from the user and display average mark
#include <stdio.h>

//fuction main begins program execution
int main() {
  //defining the variables
  int mark1, mark2;
  float avg ;

  printf("Enter your marks  for two subjects : "); //prompt 
  scanf("%d %d", &mark1, &mark2); //read marks from the user

  avg = (mark1 + mark2) / 2.0 ; //calculation 

  printf("your average mark is : %.2f ", avg); //prompt

  return 0;
}

//end of the main function 

