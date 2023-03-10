/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

// this program shows the total price for the trip 

#include <stdio.h>
// main function begins program execution
int main() {

    // defining variables 
    int distance ;
    float price ;

    printf("Enter you drew distance : "); //prompt 
    scanf("%d", &distance); // read the distance from the user 

  //conditional statement 
    if(distance <= 30){
        price = distance * 50 ; //calculation 
    }
    else{
        price = 1500 + 40 * (distance - 30 ); //calculation
    }   

    printf("Your total amount is %.2f ", price ); //prompt
      
  
  return 0;
}

// end of the main function
