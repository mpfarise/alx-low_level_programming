#include "main.h"
#include <unistd.h>

/**
 * _putchar -  write character of c to stdout
 * @c: character to print.
 *
 * Return: on success 1
 *         on errors -1 is returned. and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
