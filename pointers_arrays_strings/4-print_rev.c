#include "main.h"



void print_rev(char *s)
{
	int len = 0;
	int i, last_index;
	while(s[len] != '\0')
	{
		len++;
	last_index = len -1;
	}
	for (i=last_index; i>=0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
