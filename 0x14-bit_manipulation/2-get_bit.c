#include "main.h"

/**
 * get_bit - to return the value of a bit at index in the decimal number
 * @n: a number to search
 * @index: the index of a bit
 *
 * Return: the  value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
