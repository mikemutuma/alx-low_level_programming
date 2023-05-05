#include "main.h"

/**
 * get_endianness - function checks the machine
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}

