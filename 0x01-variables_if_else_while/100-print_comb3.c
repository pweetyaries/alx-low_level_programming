#include <stdio.h>

/**
 * main - print the possible combination of two digit
 * Return: 0 if success
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;
	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
