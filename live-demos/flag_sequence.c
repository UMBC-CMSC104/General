/* File: flag_sequence.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 10/16/2012
   Description: This program demonstrates flags and sequence control.
*/

#include <stdio.h>

/* Main function */
int main()
{
    int flag1 = 0, flag2 = 0;
    int i;
    
    /* Flag demo */
    for(i=0; i<10; i++)
    {
        if(i == 15)
        {
            flag1 = 1;
        }
    }

    printf("After the loop, flag1 is %d\n", flag1);
    
    for(i=0; i<20; i++)
    {
        if(i == 15)
        {
            flag2 = 1;
        }
    }

    printf("After the loop, flag2 is %d\n", flag2);

    printf("\n\n");

    /* Break demo */
    printf("Break demo: \n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", i);

        if(i == 7)
        {
            printf("Break at %d!\n", i);
            break;
        }
    }

    printf("\n\n");

    printf("Continue demo: \n");

    /* Continue demo */
    for(i=0; i<10; i++)
    {
        if(i == 7)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
