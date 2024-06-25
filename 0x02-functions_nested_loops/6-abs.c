#include "main.h"
/**
 * _abs - copmputer the value of an integer
 * @c: number to be checked
 * Return: absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
