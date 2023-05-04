#include "main.h"
/**
 * _power - calculate (base and power)
 * @dbase: base of the exponet
 * @pwr: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int dbase, unsigned int pwr)
{
	unsigned long int res;
	unsigned int k;

	res = 1;
	for (k = 1; k <= pwr; k++)
		res *= dbase;
	return (res);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
