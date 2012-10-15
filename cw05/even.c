/* File: even.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/15/2012
   Description: This program determines the type of evenness of a number.
*/

#include <stdio.h>

/* Determine and print out evenness */
void even(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is even!\n", num);
    }
    else
    {
        printf("%d is odd!\n", num);
    }
}

/* Determine and print out singly evenness */
void singly_even(int num)
{
    if(num % 4 == 2)
    {
        printf("%d is singly even!\n", num);
    }
    else
    {
        printf("%d is not singly even!\n", num);
    }
}

/* Determine and print out doubly evenness */
void doubly_even(int num)
{

    if(num % 4 == 0)
    {
        printf("%d is doubly even!\n", num);
    }
    else
    {
        printf("%d is not doubly even!\n", num);
    }
}

int main()
{
    int user_input;

    /* Read in user input */
    printf("Please enter a number: ");
    scanf("%d", &user_input);
    getc(stdin);

    /* Print out types of evenness */
    even(user_input);
    singly_even(user_input);
    doubly_even(user_input);

    return 0;
}
