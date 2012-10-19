/* File: quiz2.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/18/2012
   Description: This program prints out a multiplication table from 0 to 5.
*/

#include <stdio.h>

/* Main function */
int main()
{
    int i, j;

    printf("Multiplication table\n");
    /* Print out the header for the table */
    printf("\t0\t1\t2\t3\t4\t5\n");

    /* Loop 0 through 5 on the outer loop, and 0 through 5 on the inner loop */
    for(i=0; i<=5; i++)
    {
        printf("%d\t", i); /* Print out i -- vertical row header */
        for(j=0; j<=5; j++)
        {
            printf("%d\t", i*j); /* Print out the multiplication */
        }
        printf("\n"); /* Move to the next line */
    }

    return 0;
}
