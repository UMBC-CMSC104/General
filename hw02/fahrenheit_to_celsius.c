/* File: fahrenheit_to_celsius.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 9/23/2011
   Description: This program converts Fahrenheit to Celsius based on user
                input.
*/

#include <stdio.h>

/* Main function */
int main()
{
    double fahrenheit;
    double celsius;

    /* Read in the Fahrenheit value */
    printf("Pleae enter a value in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    getc(stdin);

    /* Perform the Fahrenheit to Celsius conversion */
    celsius = (fahrenheit - 32.0) * 5.0/9.0;

    /* Print out the value */
    printf("%f degrees Fahrenheit is %f degrees Celsius\n", 
            fahrenheit, celsius);

    return 0;
}
