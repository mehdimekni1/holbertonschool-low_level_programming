#include "main.h"
/**
 * print_alphabet_x10 - in lowercase, followed by a new line.
 * Return:0
 */
void print_alphabet_x10(void)
{
	int n = 0, i;

	while (n < 10)
	{
		i = 97;
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		n++;
		_putchar('\n');
	}
}
