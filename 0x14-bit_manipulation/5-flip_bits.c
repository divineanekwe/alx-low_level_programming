#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip to
  * get from one number to another
  * @n: The number to flip from
  * @m: The number to flip to
  *
  * Return: The number of bits to flip from @n to @m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m = n ^ m, count = 0;

	while (n_xor_m > 0)
	{
		count += (n_xor_m & 1);
		n_xor_m >>= 1;
	}
	return (count);
}
