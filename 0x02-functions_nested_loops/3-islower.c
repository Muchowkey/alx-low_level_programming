#include "main.h"

/**
 * _islower - entrypoint
 * Description: checks if int c is lower
 * @c: value received
 * Return: 0
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
