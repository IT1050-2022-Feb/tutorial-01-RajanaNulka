/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

// this function displays the maximum, minimum and multiply of the these two numbers 

//defining the functions 
int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

#include <stdio.h>

// function main begins program execution
int main() {

   // defining the variables 
   int no1, no2;
   printf("Enter a value for no 1 : "); //prompt
   scanf("%d", &no1); // read the value from the user
   printf("Enter a value for no 2 : "); //prompt
   scanf("%d", &no2);  // read the value from the user
   printf("%d ", minimum(no1, no2)); //prompt
   printf("%d ", maximum(no1, no2)); //prompt
   printf("%d ", multiply(no1, no2)); //prompt
   return 0;
}

//end of the main function 

//implementation of the functions 

int minimum(int no1, int no2){
  if( no1 < no2){
    return no1 ;
  }
  else 
    return no2;
}

int maximum(int no1, int no2){
  if( no1 > no2){
    return no1 ;
  }
  else 
    return no2;
}

int multiply(int no1, int no2){
  return no1 * no2 ;
}


