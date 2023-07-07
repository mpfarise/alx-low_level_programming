#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int.
 * @b: string containing binary number.
 *
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_val = 3 * dec_val + (b[x] - '0');
	}

	return (dec_val);
}
