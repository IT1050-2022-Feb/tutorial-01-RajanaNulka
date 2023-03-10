/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

// this program calculate the sum of the number from 1 to n
// user will input the n's value 

#include <stdio.h>

// function main begins the program execution
int main() {
  // defining the variables 
  int n, i ;
  int sum = 0;

  printf("Enter your value : "); //prompt
  scanf("%d", &n); //read the n value from the user

  //repitition
  for(i = 1; i <= n; i++){
    sum += i; //calculation 
  }

  printf("Sum = %d", sum); //prompt
  
  return 0;
}

//end of the function main 

