#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - assings a random number in n and prints
 * return: 0 code runs succesfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		
			printf("%d is negative\n", n);
	}
	return(0);
}
