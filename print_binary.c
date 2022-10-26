#include "main.h"
/**
 * print_binary - print a binary number
 * @b: unsigned int
 * Return: int
 */

int print_binary(va_list b, flags_t *f)
{
unsigned int num = va_arg(b, unsigned int);
char *str = convert(num, 2, 0);

(void)f;
return (_puts(str));
}
