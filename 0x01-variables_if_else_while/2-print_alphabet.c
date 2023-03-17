#include<stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 code runs with success
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
