#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct delimitor
{
	char d;
	int (*f)(va_list);
}delim;

int _putchar(char c);
int cfunc(va_list c);
int sfunc(va_list s);
int _printf(const char *format, ...);

#endif
