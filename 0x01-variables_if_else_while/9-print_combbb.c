#include<stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * ascending order
 * Return: 0 code runs with succes
 */

int main(void)
{
	int a = 48;

	while (a != 57)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('9\n');
	return (0);
}
