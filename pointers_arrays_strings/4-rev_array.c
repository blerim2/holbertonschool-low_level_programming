#include "main.h"
#include <stdio.h>

/**
 ** reverse_array - Reverses an array of integers.
 ** @a: Array of integers.
 ** @n: Number of elements in the array
 **
 ** Return: nothing.
 **/

void reverse_array(int *a, int n)
{
	int i, tmp;
		for (i = 0; i < n / 2; i++)
		{
			tmp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = tmp;
		}
}
