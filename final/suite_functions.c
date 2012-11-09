/* File: suite_functions.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 11/9/2012
   Description: This program demonstrates the get_suite and get_face_value 
                functions.
*/

#include <stdio.h>
#include <string.h>

/* Returns a string representation of the suite for the card */
char *get_suite(int card, char *suite)
{
    int suite_int = card / 13;

    switch(suite_int)
    {
        case 0: strcpy(suite, "Spades"); break;
        case 1: strcpy(suite, "Hearts"); break;
        case 2: strcpy(suite, "Diamonds"); break;
        case 3: strcpy(suite, "Clubs"); break;
    }

    return suite;
}

/* Returns a string representation of the face value for the card */
char *get_face_value(int card, char *face_value)
{
    int face_value_number = (card - 1) % 13;

    switch(face_value_number)
    {
        case 0: strcpy(face_value, "Ace"); break;
        case 1: strcpy(face_value, "2"); break;
        case 2: strcpy(face_value, "3"); break;
        case 3: strcpy(face_value, "4"); break;
        case 4: strcpy(face_value, "5"); break;
        case 5: strcpy(face_value, "6"); break;
        case 6: strcpy(face_value, "7"); break;
        case 7: strcpy(face_value, "8"); break;
        case 8: strcpy(face_value, "9"); break;
        case 9: strcpy(face_value, "10"); break;
        case 10: strcpy(face_value, "Jack"); break;
        case 11: strcpy(face_value, "Queen"); break;
        case 12: strcpy(face_value, "King"); break;
    }

    return face_value;
}

int get_points(int card)
{
    int face_value_number = ((card - 1) % 13) + 1;

    return (face_value_number > 10 ? 10 : face_value_number);
}

/* Main function */
int main()
{
    char suite[16];
    char face_value[16];
    int points;

    int card1 = 12, card2 = 33, card3 = 25, card4 = 14;

    /* Card 1 */
    get_face_value(card1, face_value);
    get_suite(card1, suite);
    points = get_points(card1);
    printf("%s of %s.  Worth %d points\n", face_value, suite, points);

    /* Card 2 */
    get_face_value(card2, face_value);
    get_suite(card2, suite);
    points = get_points(card2);
    printf("%s of %s.  Worth %d points\n", face_value, suite, points);

    /* Card 3 */
    get_face_value(card3, face_value);
    get_suite(card3, suite);
    points = get_points(card3);
    printf("%s of %s.  Worth %d points\n", face_value, suite, points);

    /* Card 3 */
    get_face_value(card4, face_value);
    get_suite(card4, suite);
    points = get_points(card4);
    printf("%s of %s.  Worth %d points\n", face_value, suite, points);

    return 0;
}
