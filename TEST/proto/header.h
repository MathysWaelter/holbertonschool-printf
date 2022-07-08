#ifndef HEADER_H
#define HEADER_H

typedef struct getdelim
{
	        char *delim;
			        int (*f)(char *s);
} gdel;

void sfunc(char *s[]);

void cfunc(char *c);

#endif
