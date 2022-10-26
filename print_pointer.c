#include "main.h"
/**
 * print_pointer - print an address (pointer) in hex format
 * @P: argument
 * Return: number of char printed
 */

int print_pointer(va_list P, flags_t *f)
{
char *str;
unsigned long int ptr = va_arg(P, unsigned long int);

register int count = 0;

(void)f;

if (!ptr)
{
    return (_puts("(nil)"));
}

str = convert(ptr, 16, 1);
count += _puts("0x");
count += _puts(str);

return (count);
}
