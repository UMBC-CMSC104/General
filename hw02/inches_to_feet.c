/* File: inches_to_feet.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 9/23/2011
   Description: This program converts inches to a feet/inches calculation
                based on user input.
*/

#include <stdio.h>

/* Main function */
int main()
{
    int user_height;
    int feet;
    int inches;

    printf("Please enter your height in inches: ");
    scanf("%d", &user_height);
    getc(stdin);

    feet = user_height / 12;
    inches = user_height % 12;

    printf("Your height is %d feet and %d inches.\n", feet, inches);

    return 0;
}
