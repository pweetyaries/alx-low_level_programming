#include <stdio.h>

/**
 * main - print lowercase alphabets.
 * Return: 0 if success
 */
int main(void)
{
	char alx[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alx[i]);
	}
	putchar('\n');
	return (0);
}
