/* File: arrays1.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/21/2012
   Description: This program demonstrates arrays.
*/

#include <stdio.h>

/* Main function */
int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    double temperatures[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int i;

    /* Print out numbers */
    printf("Numbers:\n");
    printf("0: %d\n", numbers[0]);
    printf("1: %d\n", numbers[1]);
    printf("2: %d\n", numbers[2]);
    printf("3: %d\n", numbers[3]);
    printf("4: %d\n", numbers[4]);
    printf("\n");
    /* Print out temperatures */
    printf("Temperatures:\n");
    printf("0: %f\n", temperatures[0]);
    printf("1: %f\n", temperatures[1]);
    printf("2: %f\n", temperatures[2]);
    printf("3: %f\n", temperatures[3]);
    printf("4: %f\n", temperatures[4]);

    temperatures[0] = temperatures[0] + 1;
    temperatures[1] = temperatures[1] + 1;
    temperatures[2] = temperatures[2] + 1;
    temperatures[3] = temperatures[3] + 1;
    temperatures[4] = temperatures[4] + 1;

    printf("\n");
    printf("Temperatures + 1:\n");
    printf("0: %f\n", temperatures[0]);
    printf("1: %f\n", temperatures[1]);
    printf("2: %f\n", temperatures[2]);
    printf("3: %f\n", temperatures[3]);
    printf("4: %f\n", temperatures[4]);

    return 0;
}
