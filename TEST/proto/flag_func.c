#include "header.h"
#include <stdio.h>

void cfunc(char *c)
{
	write(1, &c, 1);
}

void sfunc(char *s[])
{
	for (n = 0; s[n] != '\0'; n++)
		write(1, &s[n], 1);
}
