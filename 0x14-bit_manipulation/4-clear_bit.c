#include "main.h"

/**
 * clear_bit - function inputs value of the bit to 0
 * @n: the points to the number to change
 * @index: position of the bit
 *
 * Return: 1 is successful, -1 is error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

