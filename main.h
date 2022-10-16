#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);


typedef struct funcs
{
	char letter;
	int(*func)(va_list ap);
}func;


#endif
