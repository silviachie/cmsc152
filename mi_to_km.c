/* mi_to_km.c
 * a basic c program which converts a user input
 * of miles to kilometers.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    double kilo, miles; 

    //print out user information
    printf("This program converts from Miles to Kilometers\n");

    //get user input
    printf("Enter a number of Miles >");
    scanf("%lf", &miles);

    //convert the miles
    kilo = miles * 1.609 ;

    //display to the user
    if (kilo >= 1) { 
    printf("%lf miles == %lf kilometers\n", miles, kilo);
    } else {
    kilo = miles * 1609;
    printf("%lf miles == %lf meters\n", miles, kilo);
    }
    //return program success
    return(0);


}
