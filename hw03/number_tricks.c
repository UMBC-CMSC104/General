/* File: number_tricks.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/15/2012
   Description: This program performs several number tricks.
*/

#include <stdio.h>

int main()
{
    int user_input;

    /* Print out menu, read in user input */
    printf("Welcome to homework 3!\n");
    printf("Which number trick would you like to see?\n");
    printf("1) Number trick A\n");
    printf("2) Number trick B\n");
    printf("3) Number trick C\n");
    printf("Please make a selection: ");
    scanf("%d", &user_input);
    getc(stdin);

    /* Number trick A */
    if(user_input == 1)
    {
        int number;
        int step1, step2, step3, step4, step5;

        /* Read in the number */
        printf("You have selected number trick A.\n");
        printf("Please enter a number: ");
        scanf("%d", &number);
        getc(stdin);

        /* Do all sorts of crazy calculations */
        step1 = number + 9;
        step2 = step1 * 2;
        step3 = step2 - 4;
        step4 = step3 / 2;
        step5 = step4 - number;

        /* Print out each step */
        printf("%d + 9 = %d\n", number, step1);
        printf("%d * 2 = %d\n", step1, step2);
        printf("%d - 4 = %d\n", step2, step3);
        printf("%d / 2 = %d\n", step3, step4);
        printf("%d - %d = %d\n", step4, number, step5);
    }
    /* Number trick B */
    else if(user_input == 2)
    {
        int number;
        int step1, step2, step3, step4, step5;

        /* Read in the number */
        printf("You have selected number trick B.\n");
        printf("Please enter a number: ");
        scanf("%d", &number);
        getc(stdin);

        /* Do all sorts of crazy calculations */
        step1 = number + 5;
        step2 = step1 * 3;
        step3 = step2 - 9;
        step4 = step3 / 3;
        step5 = step4 - number;

        /* Print out each step */
        printf("%d + 5 = %d\n", number, step1);
        printf("%d * 3 = %d\n", step1, step2);
        printf("%d - 9 = %d\n", step2, step3);
        printf("%d / 3 = %d\n", step3, step4);
        printf("%d - %d = %d\n", step4, number, step5);
    }
    /* Number trick C */
    else if(user_input == 3)
    {
        int number; 
        int selection1, selection2;

        /* Print out the directions */
        printf("You have selected number trick C.\n");

        printf("1) Please select two numbers that are both less than 10.\n");
        printf("2) Choose one of the numbers and multiply it by 5.\n");
        printf("3) Add 7 to that result.\n");
        printf("4) Multiply the resulting sum by 2.\n");
        printf("5) Finally, add in the the number that you did not choose in step 2.\n");

        /* Read in the number */
        printf("Tell me what your answer is: ");
        scanf("%d", &number);
        getc(stdin);

        /* Do the appropriate calculation */
        number -= 14;
        selection1 = number / 10;
        selection2 = number % 10;

        /* Print out the values */
        printf("Your numbers are %d and %d.  You selected %d in step 2.\n", selection1, selection2, selection1);
    }
    else /* Wrong input! */
    {
        printf("Invalid selection!\n");
    }

    return 0;
}
