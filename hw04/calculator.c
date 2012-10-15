/* File: calculator.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/15/2012
   Description: This program is a very basic calculator.
*/

#include <stdio.h>

/* Print menu function */
void print_menu()
{
    printf("Welcome to homework 4!");
    printf("Please select an option:\n");
    printf("1) Add two numbers\n");
    printf("2) Subtract two numbers\n");
    printf("3) Multiply two numbers\n");
    printf("4) Divide two numbers\n");
    printf("5) Modulus two numbers\n");
}

/* Generic integer number read function */
int get_number()
{
    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);
    getc(stdin);

    return number;
}

/* Generic double number read function */
int get_double_number()
{
    double number;

    printf("Please enter a real number: ");
    scanf("%lf", &number);
    getc(stdin);

    return number;
}

/* Add function */
void add()
{
    int num1, num2;
    
    printf("You have chosen to add two numbers.\n");
    
    /* Get the two numbers from the user */
    num1 = get_number();
    num2 = get_number();

    /* Print out the addition */
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
}

/* Subtract function */
void subtract()
{
    int num1, num2;
    
    printf("You have chosen to subtract two numbers.\n");
    
    /* Get the two numbers from the user */
    num1 = get_number();
    num2 = get_number();

    /* Print out the subtraction */
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
}

/* Multiply function */
void multiply()
{
    int num1, num2;
    
    printf("You have chosen to multiply two numbers.\n");
    
    /* Get the two numbers from the user */
    num1 = get_number();
    num2 = get_number();

    /* Print out the multiplication */
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
}

/* Divide function */
void divide()
{
    double num1, num2;
    
    printf("You have chosen to divide two numbers.\n");
    
    /* Get the two double numbers from the user */
    num1 = get_double_number();
    num2 = get_double_number();

    /* Print out the division */
    printf("%f / %f = %f\n", num1, num2, num1 / num2);
}

/* Modulus function */
void modulus()
{
    int num1, num2;
    
    printf("You have chosen to modulus two numbers.\n");
    
    /* Get the two numbers from the user */
    num1 = get_number();
    num2 = get_number();

    /* Print out the modulus */
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
}

int main()
{
    int user_selection;

    /* Get user selection */
    print_menu();
    user_selection = get_number();

    /* Determine proper path for user selection */
    switch(user_selection)
    {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            modulus();
            break;
        default:
            printf("Invalid selection!\n");
            break;
    }

    return 0;
}
