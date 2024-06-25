#include "main.h"

/**
 * print_alphabet_10x - Print alphabet 10x times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	i = 0;

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
