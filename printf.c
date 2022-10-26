#include "main.h"
/**
 * printf - produces output according to a format.
 * @format: format string containing the characters.
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
int i = 0, j, len = 0, count = 0;
va_list valist;
print_t func_types[] = {
{'c', print_char}, {'s', print_string}, {'d', print_int},
{'i', print_int}, {'r', print_rev}, {'b', print_binary},
{'R', print_rot13}, {'u', print_unsigned}, {'o', print_oct},
{'x', print_hex_lower}, {'X', print_hex_upper}, {'p', print_pointer},
{'S', print_special_chars}};
if (!format || (format[0] == '%' && format[1] == 0))
return (-1);
va_start(valist, format);
while (format && format[i])
{
if (format[i] == '%')
{
if (format[++i] == '%')
len += _putchar('%');
j = 0;
while (j <= 12)
{
if (format[i] == func_types[j].t)
len += func_types[j].f(valist);
count = 1;
break;
j++;
}
if (!count && format[i] != '%')
len += 2;
_putchar('%');
_putchar(format[i]);
}
else
{
len += _putchar(format[i]);
}
i++;
}
va_end(valist);
return (len);
}
