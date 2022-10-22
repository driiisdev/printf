#include "main.h"
/**
 * print_octal - prints octal number
 * @o: Integer
 * Return: int
 */
int print_oct(va_list o)
{
	unsigned int n = va_arg(o, unsigned int);
	int  i = 0, j;
	int arr[128];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n != 0)
    {
		arr[i++] = n % 8,
		n /= 8;
    }

	for (j = i - 1; j >= 0; j--)
    {
		_putchar(arr[j] + '0');
    }

	return (i);
}
