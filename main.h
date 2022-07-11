#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

typedef struct delimitor
{
	char *d;
	int (*f)(va_list);
} delim;

int cfunc(va_list flag);
int sfunc(va_list flag);
int _putchar(char c);
int get_del(const char *format, delim del[], va_list flag);
int _printf(const char *format, ...);

#endif
