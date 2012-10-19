/* File: quiz2_ec.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/18/2012
   Description: This program prints out a multiplication table from 0 to a 
                user specified value
*/
#include <stdio.h>

int main()
{
    int upper_bound;
    int i, j;

    /* Prompt user for a number */
    printf("Welcome to the multiplication table program!\n");
    printf("Enter a number for how high the table should go: ");
    scanf("%d", &upper_bound);
    getc(stdin);

    /* Make sure input is valid */
    if(upper_bound < 1)
    {
        printf("Invalid input!  Must be greater than 0!\n");
    }
    else
    {
        /* Print out the header */
        printf("\t");
        for(i=0; i<=upper_bound; i++)
        {
            printf("%d\t", i);
        }
        printf("\n");

        /* Print out the multiplication table */
        for(i=0; i<=upper_bound; i++)
        {
            printf("%d\t", i);
            for(j=0; j<=upper_bound; j++)
            {
                printf("%d\t", i*j);
            }
            printf("\n");
        }
    }

    return 0;
}
