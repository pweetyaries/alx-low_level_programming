#include <stdio.h>

/**
 * main - print the function
 * Return: 0 if success
 */
int main(void)
{
	char alx[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alx[i]);
	}
	putchar('\n');
	return (0);
}
