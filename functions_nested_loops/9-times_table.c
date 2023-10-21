#include "main.h"
#include <stdio.h>
/**
 * times_table- a function that prints the 9 times table, starting with 0.
 *
 * Return:0
 */

void times_table(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int x;

		for (x = 0; x < 10; x++)
		{
			int y = x * n;

			printf("%d", y);
			if (x != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
