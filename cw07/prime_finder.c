/* File: prime_finder.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/18/2012
   Description: This program will find every prime number given from 2 to a user
                supplied number 
*/

#include <stdio.h>

/* Read in a number */
int get_number()
{
    int number;

    printf("Please enter the upper bound of numbers to test for primality: ");
    scanf("%d", &number);
    getc(stdin);

    return number;
}

/* Prime test */
int is_prime(int number)
{
    /* Start off with prime_test = 1.
       prime_test = 1 implies that number is prime.
       This means that the number is assumed to be prime until proven 
       otherwise. */
    int prime_test = 1; 
    int half = number / 2;
    int i;

    for(i=2; i<=half; i++)
    {
        /* If i divides evenly into number, number is not prime.
           Set the flag to 0, which means not prime. */
        if(number % i == 0) 
        {
            prime_test = 0;
        }
    }

    /* Return prime */
    return prime_test;
}

/* Main function */
int main()
{
    int upper_bound;

    /* Read in upper bound from user */
    printf("Welcome to classwork 7!\n");
    upper_bound = get_number();

    /* Print out error if input is invalid */
    if(upper_bound < 2)
    {
        printf("Invalid input!\n");
    }
    else
    {
        int i;

        /* Test 2...upper_bound for primeness */
        for(i=2; i<=upper_bound; i++)
        {
            /* Store off flag here, test if i is prime */
            int prime_test = is_prime(i);

            /* If prime_test == 1, then i is prime */
            if(prime_test == 1)
            {
                printf("%d is prime!\n", i);
            }
        }
    }

    return 0;
}
