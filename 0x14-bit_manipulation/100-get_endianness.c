#include "main.h"

/**
 * get_endianness - checks if machine is little or big endian
 * Return: 0 fir big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
