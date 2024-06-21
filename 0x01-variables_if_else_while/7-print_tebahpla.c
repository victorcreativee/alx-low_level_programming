#include <stdio.h>
/**
 * main - An entry point
 * Description: Print lower case in reverse
 * Return: Always 0(success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
		putchar('\n');

		return (0);
}
