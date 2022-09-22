#include "main.h"

/**
 * _isalpha - entry point
 * Description: tells if c is an alphabet
 * @c: returns value
 * Return: 0
 */

int _isalpha(int c)
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
