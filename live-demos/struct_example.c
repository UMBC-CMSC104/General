#include <stdio.h>

struct point
{
    int x;
    int y;
    char point_name[256];
};

struct point new_point()
{
    struct point p;

    printf("Please enter X: ");
    scanf("%d", &p.x);
    getc(stdin);

     printf("Please enter Y: ");
     scanf("%d", &p.y);
     getc(stdin);

    printf("Please enter the point name: ");
    scanf("%s", p.point_name);
    getc(stdin);

    return p;
}

void print_point(struct point p)
{
    printf("%s: %d, %d\n", p.point_name, p.x, p.y);
}

int main()
{
    struct point p1, p2, middle_point, end_point;

    p1 = new_point();
    p2 = new_point();
    middle_point = new_point();
    end_point = new_point();

    print_point(p1);
    print_point(p2);
    print_point(middle_point);
    print_point(end_point);

    return 0;
}
