#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers follow by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 * @...: A variable numbers to be printed.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
