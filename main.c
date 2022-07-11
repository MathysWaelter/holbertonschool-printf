#include "main.h"
#include <stdio.h>

int main(void)
{
	int len, len2;

	len = _printf(NULL);
	len2 = printf(NULL);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("%d %d\n", len, len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
