#include "main.h"
/**
 * print_pointer - print an address (pointer) in hex format
 * @P: argument
 * Return: number of char printed
 */

int print_pointer(va_list P)
{
void *p = va_arg(P, void*);
long int cast;
int a, i;
char nl[] = "(nil)";

if (!p)
{
    for (i = 0; nl[i]; i++)
    {
    _putchar(nl[i]);
    }
    return (i);
}

cast = (unsigned long int)p;
_putchar('0');
_putchar('x');
a = print_hex(cast, 0);
return (a + 2);
}
