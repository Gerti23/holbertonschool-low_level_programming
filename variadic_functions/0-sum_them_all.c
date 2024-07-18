#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: second parameter
 * Return: 0 if n == 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	unsigned int s = 0;

	va_start(nums, n);

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		s = s + va_arg(nums, int);
		i++;
	}
	va_end(nums);

	return (s);
}
