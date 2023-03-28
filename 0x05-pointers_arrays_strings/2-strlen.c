#include "main.h"
/**
 * _strlen - to return the length of a string
 * @s: pointer to be used
 *
 * Return: The length of the strin
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
