#include "main.h"
/**
 * print_octal - prints octal number
 * @o: Integer
 * Return: int
 */

int print_oct(va_list o, flags_t *f)
{
unsigned int num = va_arg(o, unsigned int);
char *str = convert(num, 8, 0);
int count = 0;

if (f->hash == 1 && str[0] != '0')
{
    count += _putchar('0');
}

count += _puts(str);

return (count);
}
