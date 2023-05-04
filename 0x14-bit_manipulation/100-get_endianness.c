#include "main.h"

/**
 * get_endianness - check if the machine small or big endian
 * Return: 1 for small, 0 for big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
