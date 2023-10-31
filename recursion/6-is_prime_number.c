#include "main.h"
#include <stdio.h>

/**
 ** is_prime -  check if a number is divisible by another number
 ** @n: the number to check
 ** @i: the divisor
 ** Return: 1 if n is prime, 0 otherwise
 **/

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 ** is_prime_number - returns 1 if the input integer
 ** @n: the number to check
 ** Return: 1 if n is prime, 0 otherwise
 **/

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
