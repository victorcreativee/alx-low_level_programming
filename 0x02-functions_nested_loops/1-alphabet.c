#include "main.h"
/**
 * print_alphabet - function to print an alphabet
 * Return: return void
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
