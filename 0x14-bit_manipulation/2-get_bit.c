#include "main.h"

/**
 * get_bit - return a value of the bit at a index in the decimal number.
 * @n: the number to search.
 * @index: index of the bit.
 *
 * Return: value of a bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
