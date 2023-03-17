#include<stdio.h>

/**
 * main - print all single digits of base 10
 * and a new line
 * Return: 0 code runs with succes
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
