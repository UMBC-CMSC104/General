#include "input_lib.h"
#include <stdio.h>

int main()
{
	int number = get_int();

	printf("%d\n", number);

	double real = get_double();

	printf("%f\n", real);

	return 0;
}
