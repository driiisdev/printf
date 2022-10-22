#include "main.h"
/**
 * print_string - print a string
 * @s: pointer to string
 * Return: int
 */
int print_string(va_list s)
{
	int i;
	char *str = va_arg(s, char *);
	char nl[] = "(null)";

	if (!str)
	{
		for (i = 0; nl[i]; i++)
		_putchar(nl[i]);
		return (i);
	}

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
