#include "main.h"
/**
 * print_char - print a character
 * @c: char
 * Return: int
 */

int print_char(va_list c)
{
	return (_putchar(va_arg(c, int)));
}