#include <stdio.h>

/**
 * main - print the possible combination of single-digit function
 * Return: 0 if success
 */
int main(void)
{
	int d;
	
	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
