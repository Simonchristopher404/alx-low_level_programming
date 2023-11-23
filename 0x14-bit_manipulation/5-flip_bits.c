#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index to set the bit
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8)
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}

