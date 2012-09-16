#include <stdio.h>

/* Main function */
int main()
{
    int choice = 0;

    printf("Welcome to classwork 3!\n");
    printf("Please select one of the following options:\n");
    printf("1) Add two numbers\n");
    printf("2) Multiply two numbers\n");
    printf("Your selection: ");
    scanf("%d", &choice);

    if(choice == 1) /* Addition */
    {
        int num1 = 0, num2 = 0;

        printf("You have selected \"add two numbers.\"\n");
        printf("Please enter the first number: ");
        scanf("%d", &num1); 
        printf("Please enter the second number: ");
        scanf("%d", &num2); 

        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if(choice == 2) /* Multiplication */
    {
        int num1 = 0, num2 = 0;

        printf("You have selected \"multiply two numbers.\"\n");
        printf("Please enter the first number: ");
        scanf("%d", &num1); 
        printf("Please enter the second number: ");
        scanf("%d", &num2); 

        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else /* Invalid input */
    {
        printf("Invalid menu selection!\n");
    }
    
    return 0;
}
