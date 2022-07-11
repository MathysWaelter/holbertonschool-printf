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

/**
 * dfunc - function to print numbers
 * @flag: va_list
 * Return: counter
 */

int dfunc(va_list flag)
{
	int counter;
	int number, divisor;
	unsigned int tmp;

	divisor = 1;
	number = va_arg(flag, int);
	counter = 0;

	if (number < 0)
	{
		counter += _putchar('-');
		tmp = number * -1;
	}
	else
		tmp = number;

	while (tmp / divisor > 9)
		divisor = divisor * 10;

	while (divisor != 0)
	{
		counter += _putchar(tmp / divisor + '0');
		tmp %= divisor;
		divisor = divisor / 10;
	}
	return (counter);
}
