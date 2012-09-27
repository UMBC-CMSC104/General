/* File: function_example.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 9/27/2011
   Description: This program implements a tiny game wherein the user will try
                to escape from a dark room.
*/

#include <stdio.h>

/* Menu printing function */
void print_menu()
{
    printf("It is dark.  You are likely to be eaten by a grue.  Exits are (N)orth, (W)est, and (S)outh.\n");
}

/* Character input function */
char get_character()
{
    char input;

    printf("Please enter a character: ");
    scanf("%c", &input);
    getc(stdin);

    return input;
}

/* Direction evaluation */
void direction_evaluation(char direction)
{
    switch(direction)
    {
        case 'N':
        case 'n':
            printf("You have been eaten by a grue.\n");
            break;
        case 'W':
        case 'w':
            printf("You stumble your way out of the dark room and into the hallway.  You are safe.\n");
            break;
        case 'S':
        case 's':
            printf("A rotted floorboard gives way beneath you, and you fall through the floor.  You are stuck in a room with no doors or windows.\n");
            break;
        default:
            printf("You are going nowhere fast.\n");
            break;
    }
}

/* Main function */
int main()
{
    char direction;

    print_menu();
    direction = get_character();
    direction_evaluation(direction);
    
    return 0;
}
