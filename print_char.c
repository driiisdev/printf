#include "main.h"
/**
 * print_char - print a character
 * @c: char
 * Return: int
 */

int print_char(va_list c)
{
    char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
