#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tensDigit;
	int unitsDigit;

	for (tensDigit = 0; tensDigit <= 8; tensDigit++)
	{
		for (unitsDigit = tensDigit + 1; unitsDigit <= 9; unitsDigit++)
		{
			putchar(tensDigit + '0');
			putchar(unitsDigit + '0');

			if (tensDigit != 8 || unitsDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
