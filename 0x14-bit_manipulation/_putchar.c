#include "main.h"
#include <unistd.h>

/**
 * @c:  is the character to print
 * _putchar it writes the character c to the stdout
 *
 * Return: Success on 1
 * on errors, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
