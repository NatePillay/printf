#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_nbr - print number
 * @arg_list: arg list
 * Return: number of printed char
 */

int print_nbr(va_list arg_list)
{
	return (print_number(va_arg(arg_list, int)));
}

/**
 * print_number - defining rules for num
 * @n: var defined
 * Return: the number format in ascii
 */


int print_number(int n)
{
	unsigned int i = 0;
	int count = 0;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		count++;
		i = -i;
	}

	if (i > 0 && i < 9)
	{
		count  += _putchar(i + '0');
		count++;
	}

	if (i > 9)
	{
		count = print_number((i / 10) + 1);
		_putchar((i % 10) + '0');
		return (count);
	}
	return (0);
}
