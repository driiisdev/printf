#include "main.h"
/**
 * print_unsigned - prints an unsigned integer
 * @u: Integer
 * Return: int
 */

int print_unsigned(va_list u, flags_t *f)
{
unsigned int u = va_arg(u, unsigned int);
char *str = convert(u, 10, 0);

(void)f;
return (_puts(str));
}
