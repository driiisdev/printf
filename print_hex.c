#include "main.h"

/**
 * print_hex_lower - print hexadecimal number
 * @x: unsigned int
 * Return: int
 */
int print_hex_lower(va_list x, flags_t *f)
{
unsigned int num = va_arg(x, unsigned int);
char *str = convert(num, 16, 1);
int count = 0;

if (f->hash == 1 && str[0] != '0')
{
    count += _puts("0x");
}

count += _puts(str);

return (count);
}

/**
 * print_hex_upper - print a
 * @X: unsigned int
 * Return: int
 */
int print_hex_upper(va_list X, flags_t *f)
{
unsigned int num = va_arg(X, unsigned int);
char *str = convert(num, 16, 0);
int count = 0;

if (f->hash == 1 && str[0] != '0')
{
    count += _puts("0X");
}

count += _puts(str);

return (count);
}
