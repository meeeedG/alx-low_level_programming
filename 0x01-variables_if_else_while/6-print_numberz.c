#include<stdio.h>

/**
 *  main - print numbers of base 10
 *  no char var, new line
 * Return: 0 code runs with succes
 */

int main(void)
{
	int f;

	for (f = 48; f <= 57; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
