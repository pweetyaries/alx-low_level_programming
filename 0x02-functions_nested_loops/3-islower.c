#include "main.h"

/**
 * _islower - Entry point for lowercase
 * lowercase character. Another cases, shows 0
 * @c: The character in ASCII code
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
