/* File: library.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/15/2012
   Description: This program is a miniature library system.
*/

#include <stdio.h>

/* Menu printing function */
void print_menu()
{
    printf("Welcome to Homework 5!");
    printf("Please select a book to get info about:\n");
    printf("1) The Book of the New Sun\n");
    printf("2) Order of Tales\n");
    printf("3) Watchmen\n");
}
/* Book info printing function */
void print_book_info(int isbn, int num_pages, int month, int day, int year)
{
    printf("ISBN: %d\n", isbn);
    printf("Number of pages: %d\n", num_pages);
    printf("Publish date: %d/%d/%d\n", month, day, year);
}

/* Book selection retrieval function */
int get_book()
{
    int number;

    printf("Please select a book: ");
    scanf("%d", &number);
    getc(stdin);

    return number;
}

int main()
{
    int user_selection;

    /* Get user selection */
    print_menu();
    user_selection = get_book();

    /* Determine proper path for user selection */
    switch(user_selection)
    {
        case 1:
            print_book_info(12345678,1200, 1, 1, 1994);
            break;
        case 2:
            print_book_info(12345678,800, 6, 30, 2012);
            break;
        case 3:
            print_book_info(12345678,500, 9, 1, 1986);
            break;
        default:
            printf("Invalid selection!\n");
            break;
    }

    return 0;
}
