#include "main.h"

/**
 * get_bit - returns value of the bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int division, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	division = 1 << index;
	result = n & division;
	if (result == division)
		return (1);

	return (0);
}
