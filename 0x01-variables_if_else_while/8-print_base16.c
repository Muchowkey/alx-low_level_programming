#include <stdio.h>

/**
 * main - entry point
 * Description: prints all numbers of base 16
 * Return: 0
 */

int main(void)
{
	char a;
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
