#include "main.h"

/**
 * sfunc - function to print strings
 * @s: va_list
 * Return: n
 */

int sfunc(va_list s)
{
	int i, n = 0;
	char *arg = va_arg(s, char*);

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
