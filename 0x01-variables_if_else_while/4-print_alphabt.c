#include <stdio.h>
/**
 * main - A program that prints lower case letter
 * Description: Prints the alphabets from 'a' to 'z' except q and e
 * Return: always 0(Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
	{
		putchar(a);
	}
		a++;
	}
		putchar('\n');

		return (0);
}
