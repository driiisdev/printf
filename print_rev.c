#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @r: string
 * Return: int
 */
int print_rev(va_list r)
{
	int i = 0, len = 0;
	char *str = va_arg(r, char *);
	char nl[] = "(null)";

	if (!str)
	{
		for (i = 0; nl[i]; i++)
        {
		_putchar(nl[i]);
        }
		return (i);
	}

	while (str[len] != '\0')
    {
		len++;
    }

	for (i = len - 1; i >= 0; i--)
    {
		_putchar(str[i]);
    }

	return (len);
}
