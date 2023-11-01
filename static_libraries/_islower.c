#include "main.h"

/**
 ***_islower - Entry point
 *** Description: checks for lowercase character
 *** @c: the character to check
 *** Return:0-if lowercase,1-if not
 ***/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
