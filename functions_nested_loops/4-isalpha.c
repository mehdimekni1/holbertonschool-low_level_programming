#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: check c
 * Return:0
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}