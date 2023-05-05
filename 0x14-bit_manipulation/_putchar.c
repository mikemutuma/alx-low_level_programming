#include "main.h"
#include <unistd.h>
/**
 * _putchar - this function writes the character c to stdout
 * @c: Character to print
 *
 * Return: On successful event 1.
 * On failure, -1 is the return.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

