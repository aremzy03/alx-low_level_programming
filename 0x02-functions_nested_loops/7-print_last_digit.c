#include "main.h"
/**
 *print_last_digit - prints the last digit of an integer
 *@num: is the arguement passed to the function
 *
 *Return: the last_digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	return (last_digit);
}
