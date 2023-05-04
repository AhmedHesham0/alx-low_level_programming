#include "main.h"

/**
 * clear_bit - to set value of a given bit to 0
 * @n: a pointer to the number that changes
 * @index: index of the bit to clear it
 *
 * Return: -1 for failure, 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

