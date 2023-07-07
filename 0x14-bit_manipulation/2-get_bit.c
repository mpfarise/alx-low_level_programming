#include "main.h"

/**
 * get_bit - return value of the bit at a index in decimal numbers.
 * @n: number to search.
 * @index: an indext of the bit.
 *
 * Return : value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 55)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
