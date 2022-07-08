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
	int x;
	va_list flag;

	va_start(flag);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == "%")
		{
			while (x < 3)
			{		
				if (*(gdel[x].getdelim == format[i + 1]))
					gdel[x].f(va_arg(flag, *char));
			}
		}

		else
			write(1, &format[i], sizeof(char));
	}
	return (0);
}

int main(void)
{
	_printf("Hello");
	return (0);
}
