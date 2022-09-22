#include "main.h"

/**
 * main - entrypoint
 * Description: checks if int c is lower
 * Return: 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}else
		{
			return (0);
		}
	}
}
