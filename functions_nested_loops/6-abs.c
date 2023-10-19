#include "main.h"
/**
 * _abs(int)- a function that computes the absolute value of an integer.
 * @n: number
 * Return:0
 */
int _abs(int n)
{

	if (n < 0)
	{
		_putchar(((-1) * n) + '0');
	}
	return (n);
}
