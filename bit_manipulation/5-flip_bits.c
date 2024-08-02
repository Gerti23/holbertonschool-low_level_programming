#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count_bits = 0;
	unsigned long int result_xor = n ^ m;

	while (result_xor)
	{
		count_bits += (result_xor & 1);
		result_xor >>= 1;
	}
	return (count_bits);
}
