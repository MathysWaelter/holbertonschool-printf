#include "main.h"
/**
 * cfunc - function to print %c
 * @c: character
 * @counter: byte's counter
 * Return: 0
 */

int cfunc(int c, int counter)
{
	write(1, &c, 1);
	counter++;
	return (counter);
}

/**
 * sfunc - function to print %s
 * @s: string
 * @counter: byte's counter
 * Return: counter
 */

int sfunc(char *s, int counter)
{
	int i;

	for (i = 0; s[i] != '\0'; i++, counter++)
		write(1, &s[i], 1);
	return (counter);

}

/**
 * _printf - function to print
 * @format: input
 * Return: counter
 */

int _printf(const char *format, ...)
{
	int count;
	int counter = 0;
	va_list flag;

	va_start(flag, format);

	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			switch (format[count + 1])
			{
				case 'c':
					counter = cfunc((va_arg(flag, int)), counter);
					count++;
					break;

				case 's':
					counter = sfunc((va_arg(flag, char*)), counter);
					count++;
					break;
			}
		}

		else
			write(1, &format[count], sizeof(char));
			counter++;
	}
	va_end(flag);
	return (counter);
}
