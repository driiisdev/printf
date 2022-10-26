#include "main.h"
/**
 * print_unsigned - prints an unsigned integer
 * @u: Integer
 * Return: int
 */

int print_unsigned(va_list u)
{
	unsigned int n = va_arg(u, int);
	long int count = 1, num = n;

	while (n > 9)
    {
		n /= 10,
		count++;
    }

	print_num_rec(num);
	return (count);
}
