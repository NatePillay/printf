#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent(va_list arg_list __attribute__((unused)));
int _putchar(char c);
int _puts(char *str, int ascii);
char *convert_base(unsigned long nb, unsigned int base, int upper);
int convert_alpha_numeric(int nb, int upper);
int (*get_func(const char c))(va_list)

typedef struct flags_print
{
	char *c;
	int(*f)(va_list);
}flag_p;


#endif
