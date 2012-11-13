/* File: input_lib.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 11/12/2012
   Description: This defines the input library.
*/

#include <stdio.h>

#include "input_lib.h"

/* Integer retrieval function */
int get_int()
{
    int input;

    printf("Please enter an integer: ");
    scanf("%d", &input);

    return input;
}

/* Double retrieval function */
double get_double()
{
    double input;

    printf("Please enter an integer: ");
    scanf("%lf", &input);

    return input;
}

/* Character retrieval function */
char get_char()
{
    char input;

    printf("Please enter an integer: ");
    scanf("%c", &input);

    return input;
}
