/* File: age.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 9/22/2011
   Description: This program prompts a user for their age and displays a number
                of things based on that prompt.
*/

#include <stdio.h>

/* Main function */
int main()
{
    int age;
    printf("Welcome to classwork 4!\n");
    printf("How old are you? ");
    scanf("%d", &age);
    getc(stdin);

    if(age < 0)
    {
        printf("Liar!\n");
    }
    else if(age >= 0 && age < 18)
    {
        printf("So young!\n");
    }
    else if(age >= 18 && age <= 22)
    {
        char college_input;

        printf("Are you in college? (y\\n) ");
        scanf("%c", &college_input);

        if(college_input == 'y')
        {
            printf("Good for you!\n");
        }
        else if(college_input == 'n')
        {
            printf("You should really consider going.\n");
        }
        else
        {
            printf("Invalid input!\n");
        }
    }
    else
    {
        printf("You're ancient!\n");
    }

    return 0;
}
