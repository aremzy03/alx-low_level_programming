#include "main.h"
/**
 *prime - checks if the value is a prime number
 *@n: the number to be checked
 *@i: counter to check  for prime number
 *
 *Return: 1 or 0 if prime or not
 */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (prime(n, i + 1));
}
/**
 *is_prime_number - prints the prime number
 *@n: the number to be checked for prime number
 *
 *Return: 1 or 0 if prime number is true
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
