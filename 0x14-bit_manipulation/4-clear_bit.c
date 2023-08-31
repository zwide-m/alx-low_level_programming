#include "main.h"

/**
 * clear_bit - It sets the value of the given bit to 0
 * @n: It's a pointer to the number to change
 * @index: The index of the bit is to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
