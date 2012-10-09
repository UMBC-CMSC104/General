#include <stdio.h>

int main()
{
    int sum = 0;
    int counter = 0;

    while(counter < 10)
    {
        int cur_num;

        printf("Current counter: %d\n", counter);
        printf("Current sum: %d\n", sum);

        printf("Number to add: ");
        scanf("%d", &cur_num);
        getc(stdin);

        sum = sum + cur_num;

        counter++;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
