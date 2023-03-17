#include<stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * ascending order
 * Return: 0 code runs with succes
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	if (a != 57)
	{	putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
