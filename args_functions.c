#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_char - print char
 * @arg_list: args
 * Return: char
 */

int print_char(va_list arg_list)
{
	char c = va_arg(arg_list, int);

	if (c == '\0')
	{
		return (write(1, &c, 1));
	}
	_putchar(c);
	return (1);
}
/**
 * print_string - printing a string
 * @arg_list: list args
 * Return: string
 */


int print_string(va_list arg_list)
{
	char *arg = va_arg(arg_list, char *);
	int sum = 0;


	if (!arg)
	{
		sum += puts("(null)", 0);
		return (sum);
	}
	return (_puts(arg, 1));
}

/**
 * print_percent - printing percent
 * @arg_list : argument 1
 * Return: %
 */

int print_percent(va_list arg_list __attribute__((unused)))
{
	return (_putchar('%'));
}
