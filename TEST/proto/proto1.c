#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "header.h"
int _printf(const char *format, ...)
{
	gdel type[3] = {
		{"c", cfunc},
		{"s", sfunc},
		{NULL, NULL}
	};
	int count;
	va_list flag;
	int i = 0;

	va_start(flag, format);

	for (count = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%')
		{
			while (i < 3)
			{		
				if (type[i].delim[0] == format[count + 1])
				{
					type[i].f(va_arg(flag, int *));
					count++;
					break;
				}
				i++;
			}
		}

		else
			va_arg(flag, char *);
			write(1, &format[count], sizeof(char *));
	}
	va_end(flag);
	return (0);
}

int main(void)
{
	char *s = "School";

	_printf("Hello %s\n", s);
	return (0);
}
