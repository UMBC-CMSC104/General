/* File: count_odd.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/18/2012
   Description: This program counts every odd number until a user specified
                limit
*/

#include <stdio.h>

/* Read in number from user */
int get_number()
{
    int number;

    printf("How high should we count odd numbers up to? ");
    scanf("%d", &number);
    getc(stdin);

    return number;
}

/* Main function */
int main()
{
    int upper_bound;
    int i;

    printf("Welcome to classwork 6!\n");
    upper_bound = get_number();

    /* Count by 2s to print out all odd numbers */
    for(i=1; i<=upper_bound; i = i + 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
