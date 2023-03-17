#include<stdio.h>

/**
 * main - print alphabet
 * followed b new line, no e and q
 * Return: 0 code runs with succes
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	putchar('\n');
	return (0);
}
