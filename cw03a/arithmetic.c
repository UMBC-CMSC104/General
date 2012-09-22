/* File: arithmetic.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 9/22/2011
   Description: This reads in a number and then prints out 3 calculations
                based on that number.
*/

#include <stdio.h>

/* Main function */
int main()
{
    int user_input;
    printf("Welcome to classwork 3a.  Please enter a number: ");
    scanf("%d", &user_input);

    /* Test if number is positive, negative, or zero */
    if(user_input > 0)
    {
        printf("The number is positive!\n");
    }
    else if(user_input < 0)
    {
        printf("The number is negative!\n");
    }
    else
    {
        printf("The number is zero!\n");
    }

    /* Storing of user_input + 5 into a variable */
    int user_input_sum = user_input + 5;

    /* Printing out the 3 calculations */
    printf("%d + 5 = %d\n", user_input, user_input_sum);
    printf("%d / 2 + %f\n", user_input, (double)user_input / 2.0);
    printf("%d * 3 = %d\n", user_input_sum, user_input_sum * 3);

    return 0;
}
