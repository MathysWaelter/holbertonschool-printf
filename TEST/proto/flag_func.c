#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int cfunc(int *c)
{
	write(1, &c, 1);
	return(0);
}

int sfunc(int *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	write(1, &s, n);
	return(0);
}
