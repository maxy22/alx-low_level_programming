#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Return the sum of all its paramenters.
 * @n - the number of parameters.
 * @... - A variable number of parameters in the calculation.
 *
 * Return: If n == 0-0 or
 * print the sum of it parameters.
 * @n: the parameter size.
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list args;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
		sum = sum + va_arg(args, int);
	     va_end args;
	return (sum);
}
