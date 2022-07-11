#include "main.h"

/**
 * cfunc - function to print character
 * @flag: va_list
 * Return: 1
 */

int cfunc(va_list flag)
{
	_putchar(va_arg(flag, int));
	return (1);
}

/**
 * sfunc - function to print string
 * @flag: va_list
 * Return: i
 */

int sfunc(va_list flag)
{
	int i, n = 0;
	char *arg = va_arg(flag, char*);

	if (arg == NULL)
	{
		arg = "(null)";
	}
	for (i = 0; arg[i]; i++)
	{
		n += _putchar(arg[i]);
	}
	return (n);
}
