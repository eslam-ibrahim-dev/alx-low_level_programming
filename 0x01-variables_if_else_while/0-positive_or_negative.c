#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * description: get a random numberand print the number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is nagitive\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
