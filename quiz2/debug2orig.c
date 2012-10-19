/* File: debuga.c
   Name: <your name here>
   Username: <your username here>
   Date: 10/18/2012
   Description: This program exists to torment students with
                debugging.

*/
#include <stdio.h>

int get_number()
{
    int number = -1; /* DEBUG: This was 1, should be -1 */
    int first_run = 1;

    while(number < 1)
    {
        /* Don't want to print "Invalid number" on first run */
        if(first_run == 1) 
        {
            first_run = 0; /* Set this flag to 0/false */
        }
        else
        {
            /* DEBUG: The quote was not fixed at the end of this line */
            printf("Invalid number!  Please enter a number greater than 0!\n");
        }

        printf("Please enter a number: ");
        scanf("%d", &number); /* DEBUG: Missing & here */
        getc(stdin);
    }

    return number;
}

int main()
{
    /* This program will calculate the averages of numbers from 1 to 100 using
       an increase interval supplied by the user.
        
       That is, if the user enters 1, it will count by 1s to average:
       (1 + 2 + 3 + 4 + 5 + ... + 99 + 100) / 100 = 50.5
       If the user enters 2, it will count by 2s to average:
       (1 + 3 + 5 + 7 + 9 + ... + 97 + 99) / 50 = 50
     */

    int interval;

    printf("Enter an interval to count by.\n");
    interval = get_number();

    int total = 0;
    int count = 0; /* DEBUG: This was 1, should be 0 */
    int i;

    for(i=1; i<=100; i = i + interval)
    {
        total = total + i; /* DEBUG: This total + 1, should be total + i */
        count++;
    }

    /* DEBUG: Second %d should be %f */
    printf("The average of interval %d is %f\n", interval, (double)total / (double)count);

    return 0;
}
