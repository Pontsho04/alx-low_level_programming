#include "main.h"

/**
 * get_bit - return value of a bit at index in decimal number
 * @n: number
 * @index: index
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
