#include "main.h"

int get_del(const char *format, delim del[], va_list flag)
{
	int i, x, counter, tmp;

	counter = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (x = 0; x < 2; x++)
			{
				if (format[i + 1] == del[x].d[0])
				{
					tmp = del[x].f(flag);
					counter += tmp;
					break;
				}
			}
			if (x == 2)
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					counter += 2;
				}
				else
					return (counter);
			}
			i++;
		}
		else
			counter += _putchar(format[i]);
	}
	return (counter);
}