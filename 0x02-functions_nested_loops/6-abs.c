#include "main.h"

/**
 * _abs - main entry point
 * Description: prints absolute value of integer
 * @n: value to be checked
 * Return: Always 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
