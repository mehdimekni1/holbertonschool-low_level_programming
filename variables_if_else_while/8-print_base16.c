#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 16)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
