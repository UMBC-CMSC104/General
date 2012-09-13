#include <stdio.h>

int main()
{
    /* printf/scanf example */
    int height = 20;

    printf("Please enter your height: ");
    scanf("%d", &height);

    getc(stdin); /* we have to put this here to prevent the next scanf 
                    from being skipped over.  Only use this if you're
                    having a similar problem to what was seen in class. */

    printf("Your height is %d\n", height);

    /* modulo example */
    int modulo_example = 11 % 5;
    printf("11 % 5 = %d\n", modulo_example);

    /* modulo plus inline expressions */
    printf("6 % 1 = %d\n", 6 % 1);
    printf("22 % 3 = %d\n", 22 % 3);
    printf("height % 5 = %d\n", height % 5);

    /* characters */
    char letter;

    printf("Please input a letter: ");
    scanf("%c", &letter);
    printf("Your letter is: %c\n", letter);

    /* doubles */
    double some_freaking_number = 23.445;
    printf("Some freaking number: %f\n", some_freaking_number);

    return 0;
}
