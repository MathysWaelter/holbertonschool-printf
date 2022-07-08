#include "header.h"
#include <stdio.h>
#include <stdlib.h>


char* itoa(int* value, char* buffer, int base);

int cfunc(int *c)
{
	write(1, &c, 1);
	return(0);
}

int sfunc(int *s)
{
	int n;
	//char* convert;

	for (n = 0; s[n] != '\0'; n++)
		;
//	s = s + '0';
//	itoa(s, convert, 16);
	write(1, &s, n);
	return(0);
}
