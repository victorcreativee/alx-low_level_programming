#include <stdio.h>
/**
 * main - An entry point
 * Description: Program that prints all possible combinations of
 * single-digit numbers
 * Return: Alway 0(success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');

		if (n < 9)
		{
			putchar(", $"[n == 8]);
		}
		n++;
	}

	putchar('\n');

	return (0);
}
