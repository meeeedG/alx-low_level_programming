#include<stdio.h>

/**
 * main - print all numbers of base 16
 * and a new line
 * Return: 0 code runs with succes
 */

int main(void)
{
	char c;
	char d;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
