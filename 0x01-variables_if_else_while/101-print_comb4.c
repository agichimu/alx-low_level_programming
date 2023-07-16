#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundredsDigit;
	int tensDigit;
	int unitsDigit;

	for (hundredsDigit = 0; hundredsDigit <= 7; hundredsDigit++)
	{
		for (tensDigit = hundredsDigit + 1; tensDigit <= 8; tensDigit++)
		{
			for (unitsDigit = tensDigit + 1; unitsDigit <= 9; unitsDigit++)
			{
				putchar(hundredsDigit + '0');
				putchar(tensDigit + '0');
				putchar(unitsDigit + '0');

				if (hundredsDigit != 7 || tensDigit != 8 || unitsDigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
