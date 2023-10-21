#include "main.h"
#include <stdio.h>
/**
 * jack_bauer- print every minute of the daystarting from 00:00 to 23:59
 *
 * Return:0
 */

void jack_bauer(void)
{
	int m = 0, h = 0;

	while (h < 24)
	{
		printf("%02d", h);
		printf(":");
		printf("%02d", m);
		printf("\n");

		m++;
		if (m == 60)
		{
			m = 0;
			h++;
		}
	}
}
