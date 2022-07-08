#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct getdelim
{
	char *delim;
	int (*f)(int *s);
} gdel;

int sfunc(int *s);

int cfunc(int *c);
#endif
