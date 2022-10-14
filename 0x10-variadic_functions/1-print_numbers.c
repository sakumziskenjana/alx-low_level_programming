#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: a variable number of numbers to printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && seperator != NULL)
			printg("%s", seperator);
	}

	printf("\n");

	va_end(nums);
}
