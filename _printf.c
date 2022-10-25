#include "main.h"
/**
 * _printf - produces output according to a format.
 * @fmt: format string containing the characters.
 * Return: the number of characters printed (excluding the null byte) 
 */

int _printf(const char *format, ...)
{
int i = 0, j, len = 0, count = 0;
const char *fmt = format;
va_list valist;
print_t func_types[] = {
{'c', print_char}, {'s', print_string}, {'d', print_int},
{'i', print_int}, {'r', print_rev}, {'b', print_binary},
{'R', print_rot13}, {'u', print_unsigned}, {'o', print_oct},
{'x', print_hex_lower}, {'X', print_hex_upper}, {'p', print_pointer},
{'S', print_special_chars}};

if (!fmt || (fmt[0] == '%' && fmt[1] == 0))
{
return (-1);
}

va_start(valist, fmt);

while (fmt && fmt[i])
{
if (fmt[i] == '%')
{
if (fmt[++i] == '%')
{
len += _putchar('%');
}
j = 0;
while (j <= 12)
{
if (fmt[i] == func_types[j].t)
{
len += func_types[j].f(valist);
count = 1;
break; 
}
j++; 
}
if (!count && fmt[i] != '%')
{
len += 2;
_putchar('%');
_putchar(fmt[i]); 
}
}
else
{
len += _putchar(fmt[i]);
}
i++;
}
va_end(valist);

return (len);
}
