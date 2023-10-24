#include "main.h"
#include "stdio.h"
/**
 * add- a function that prints all natural numbers from n to 98.
 * @n: integer
 *
 * Return:0
 */
void print_to_98(int n)
{
    for (n = n; n < 99; n++)
    {
        printf("%d, ", n);
    }
    printf("\n");
}
