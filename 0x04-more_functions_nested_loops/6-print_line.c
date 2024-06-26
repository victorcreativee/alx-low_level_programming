#include "main.h"

/**
 * print_line - Draws a dash line using  _.
 *
 * @n: The number of _ characters to be printed.
 * Example :
 * print_line(5)  -->  _____
 */


void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
