#include <stdio.h>
/**
 * main - An entry point
 * Description: Program that prints all the numbers of base 16 in lowercase
 * Return: Always 0(Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	n = 0;

	while (n < 6)
	{
		putchar(n + 'a');
		n++;
	}

	putchar('\n');
	return (0);
}
