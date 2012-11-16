/* File: struct_example.c
   Name: Michael Wilson
   Username: mwilson3
   Date: 11/16/2012
   Description: This program demonstrates structs.
*/

#include <stdio.h>

/* The struct */
struct point
{
    int x;
    int y;
    char label[256];
};

/* A function to create a new point */
struct point new_point()
{
    struct point p;

    /* Read in X */
    printf("Please enter X: ");
    scanf("%d", &p.x);
    getc(stdin);

    /* Read in Y */
    printf("Please enter Y: ");
    scanf("%d", &p.y);
    getc(stdin);

    /* Get the label for the point */
    printf("Please enter a label: ");
    scanf("%s", p.label);
    getc(stdin);

    return p;
}

/* The function to print out a point */
void print_point(struct point p)
{
    printf("%d, %d, %s\n", p.x, p.y, p.label);
}

/* The main function */
int main()
{
    struct point p1, p2;

    /* Get new points */
    p1 = new_point();
    p2 = new_point();

    /* Print them out */
    print_point(p1);
    print_point(p2);

    return 0;
}
