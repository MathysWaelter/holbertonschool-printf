#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - print function
 * @c: imput
 * Return: output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _printf - function to print all types
 * @format: imput
 * Return: Counter.
 */
int _printf(const char *format, ...)
{
	delim del[] = {
		{'c', cfunc},
		{'s', sfunc},
		{0, 0}
	};
	int i, counter = 0, x;
	va_list flag;

	va_start(flag, format);
	if (*format == 0)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (x = 0; x < 3; x++)
			{
				if (del[x].d == 0)
				{
					counter += _putchar(format[i]);
					break;
				}
				else if (format[i + 1] == del[x].d)
				{
					counter += del[x].f(flag);
					break;
				}
			}
			i++;
		}
		else
			counter += _putchar(format[i]);
	}
	va_end(flag);
	return (counter);
}
