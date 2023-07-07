#include "main.h"
#include <nistd.h>

/**
 * _putchar - write character c to stdout.
 * @c: character to print.
 *
 * Return: success on 1.
 * on error, -1 is returned, ernno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
