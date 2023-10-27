#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 ** _strstr - Locates a substring.
 ** @haystack: The string to be searched.
 ** @needle: The substring to be located.
 **
 ** Return: If the substring is located - a pointer to the beginning
 **                                       of the located substring.
 ** If the substring is not located - NULL.
 **/

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

		if (*needle == '\0')
			return (haystack);
				while (*haystack != '\0')
				{
					p1 = haystack;
					p2 = needle;

					while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
					{
						p1++;
						p2++;
					}
				if (*p2 == '\0')
				return (haystack);
				haystack++;
				}
		return (NULL);
}
