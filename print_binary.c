#include "main.h"
/**
 * print_binary - print a binary number
 * @b: unsigned int
 * Return: int
 */

int print_binary(va_list b)
{
	unsigned int d = va_arg(b, int);
	int  i = 0, j;
	int bin[128];

	if (d == 0)
		return (_putchar('0'));

	while (d > 0)
		bin[i++] = d % 2,
		d /= 2;

	for (j = i - 1; j >= 0; j--)
		_putchar('0' + bin[j]);

	return (i);
}
