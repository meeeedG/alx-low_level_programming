#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s : is the memory area to be filled
 * @b : the copied char
 * @n : is number of times to copy b
 * 
 * Return : is pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
