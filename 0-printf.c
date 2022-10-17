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

	func specifiers[]= {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
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

	if (format == NULL && format[i] = '\0')
	{
		return (-1);
	}
	va_start(arg_list, format);
	print_char = parser(format f_list, arg_list);
	va_end(arg_list);
	return (print_char);
}
