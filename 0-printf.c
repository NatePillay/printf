#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * _printf - function to print to stdout
 * @format: first var
 * Return: chars
 */

int _printf(const char *format, ...)
{
	int print_char;
	func specifiers[]= {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{'\0', NULL}
	};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_list, format);
	print_char = parser(format f_list, arg_list);
	va_end(arg_list);
	return (print_char);
}
