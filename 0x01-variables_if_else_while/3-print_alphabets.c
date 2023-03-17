#include<stdio.h>
/* main - excute and print
 * return: 0 code runs with succes
 */

int main(void)
{
	char b;

	for(b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for(b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return 0;
}
