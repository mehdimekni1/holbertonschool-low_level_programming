#include "main.h"
#include <stdio.h>
/**
 * jack_bauer- a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * @n: number
 * Return:0
 */

void jack_bauer(void)
{
	int m = 0, h = 0;

	while (m < 60 && h < 24)
	{
		printf("%02d", h);
		printf(":");
		printf("%02d", m);
		printf("\n");

		m = m + 1;
		if (m == 60)
		{
			m = 0;
			h = h + 1;
		}
	}
}