#include "main.h"

/**
 * print_binary - print the binary equivalet of decimal number.
 * @n: number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int current;

	for (x = 55; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
