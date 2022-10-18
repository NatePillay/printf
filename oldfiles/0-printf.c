#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * get_func - choose the right func from list
 * @c: char to check
 * Return: pointer to function
 */

int (*get_func(const char c))(va_list)
{
	int i = 0;

	flag_p specifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_nbr},
		{"i", print_nbr}
	};

	while (i < 5)
	{
		if (c == specifier[i].c[0])
		{
			return (specifier[i].f);
		}
		i++;
	}
	return (NULL);
}


/**
 * _printf - function to print to stdout
 * @format: first var
 * Return: chars
 */


int _printf(const char *format, ...)
{
	va_list arg_list;
	int sum = 0, i = 0;

	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i] != '\0')
				func = get_func(format[i + 1]);
			if (func == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			}
			else
			{
				sum += func(arg_list);
				i += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
			i++;
		}
	}
	va_end(arg_list);
	return (sum);
}
