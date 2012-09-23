/* File: celsius_to_fahrenheit.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 9/23/2011
   Description: This program converts Celsius to Fahrenheit based on user
                input.
*/

#include <stdio.h>

/* Main function */
int main()
{
    double fahrenheit;
    double celsius;

    /* Read in the Fahrenheit value */
    printf("Pleae enter a value in Celsius: ");
    scanf("%lf", &celsius);
    getc(stdin);

    /* Perform the Fahrenheit to Celsius conversion */
    fahrenheit = celsius * 9.0/5.0 + 32.0;

    /* Print out the value */
    printf("%f degrees Celsius is %f degrees Fahrenheit\n", 
            celsius, fahrenheit);

    return 0;
}
