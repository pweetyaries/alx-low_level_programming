#include <stdio.h>

/**
 * main - print the function in reverse
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
