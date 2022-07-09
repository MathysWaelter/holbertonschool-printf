#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int cfunc(int c, int counter);
int sfunc(char *s, int counter);
int _printf(const char *format, ...);

#endif
