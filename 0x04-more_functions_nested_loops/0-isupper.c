#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if number is uppercase
 * @c: input for character
 * Return: 1 if its upper otherwise 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
