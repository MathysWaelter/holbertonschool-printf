#include "main.h"

/**
 * cfunc - function for print %c
 * @c: character
 * Return: 0
 */

int cfunc(int c)
{
	write(1, &c, 1);
	return (0);
}

/**
 * _printf - function to print
 * @format: input
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int count;
	va_list flag;
	char *g;

	va_start(flag, format);

	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			switch (format[count + 1])
			{
				case 'c':
					{
						cfunc(va_arg(flag, int));
						count++;
						break;
					}

				case 's':
					{
						g = va_arg(flag, char*);
						puts(g);
						count++;
						break;
					}
			}
		}

		else
			write(1, &format[count], sizeof(char));
	}
	va_end(flag);
	return (0);
}
