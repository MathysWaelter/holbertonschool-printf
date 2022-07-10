#include "main.h"

/**
 * cfunc - function to print a single character
 * @c: va_list
 * Return: i
 */

int cfunc(va_list c)
{
	int i = 0;
	char arg = (char) va_arg(c, int);

	i += _putchar(arg);
	return (i);
}
