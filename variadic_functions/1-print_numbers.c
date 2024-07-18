#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int j;

	va_start(pn, n);

	if (separator == NULL)
		separator = "";
	j = 1;
	while (j <= n)
	{
		if (j != n)
			printf("%d%s", va_arg(pn, int), separator);
		else
			printf("%d", va_arg(pn, int));
		j++;
	}
	printf("\n");
	va_end(pn);
}
