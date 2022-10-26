#include "main.h"
/**
 * print_string - print a string
 * @s: pointer to string
 * Return: int
 */

int print_string(va_list s)
{
    int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
    {
		str = "(null)";
    }
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
