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
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		int num = va_arg(nums, int);

		printf("%d", num);

		if (separator != NULL && index < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
