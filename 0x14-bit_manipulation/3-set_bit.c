#include "main.h"

/**
 * set_bit - functionto input bit at a position to 1
 * @n: the points to a no to change
 * @index: position of the bit to changed to 1
 *
 * Return: 1 is successful, -1 is error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

