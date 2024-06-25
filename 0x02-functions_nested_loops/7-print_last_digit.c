#include "main.h"
/**
 * print_last_digit - last digit of number
 * @n: number to be treated
 * Return: value of the last digit og number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
