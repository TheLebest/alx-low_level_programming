#include <stdlib.h>
#include <stdtime.h>
#include <stdio.h>
/* more headers go there */

/* betty style doc for function goes there */
/**
 * main -main function
 *
 * Return: always 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes here */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n)
	else if (n < 0)
		printf("%d is negative", n);
	printf("\n")
	return (0);

