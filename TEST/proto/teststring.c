#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void _printf(char* string, ...)
{
	char* i;

	va_list vlist;
	va_start(vlist, string);

	for (char* ptr = string; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			i = va_arg(vlist, char*);
			while (*i != '\0')
				putchar(*i++);
		}
		putchar(*ptr);
	}
	va_end(vlist);
}

int main()
{
	char test[20] = "School";

	_printf("Hello %s\n", test);
}
