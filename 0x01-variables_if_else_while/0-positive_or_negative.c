#include <stdlib.h>
#include <time.h>
#include <stdio.h>



/**
 * main - entry point
 *
 * it executes the program, and prints n
 *
 * Return:always return 0
 */
/* more headers goes there */

/*betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes in there */
	if (n > 0)

		printf("%d is positive\n", n);

	else if (n == 0)

		printf("%d is zero\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

	return (0);


}
