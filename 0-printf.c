#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * get_func - choose the right func from list
 * @c: char to check
 * Return: pointer to function
 */

int (*get_func(const char c))(va_list)
{
	int i;

	conver_t specifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};



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

	int (*specifier)();

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i + 1] == '%')
		{
			if (format[i] != '\0')
				specifier = get_func(format[i + 1]);
			if (specifier == NULL)
			{
				_putchar(format[i]);
				sum++;
				i++;
			}
			else
			{
				sum += specifier(arg_list);
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
