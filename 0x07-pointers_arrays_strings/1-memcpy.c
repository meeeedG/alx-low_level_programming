#include "mainh"

/**
 * *_memcpy - copy memo area
 * @dest : is destination
 * @src : source where to copy from
 * @n : number of bytes to copy
 * Return: point to destination
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
