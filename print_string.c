#include "main.h"
/**
 * print_string - print a string
 * @s: pointer to string
 * Return: int
 */

int print_string(va_list s, flags_t *f)
{
char *s = va_arg(s, char *);

(void)f;

if (!s)
{
    s = "(null)";
}
return (_puts(s));
}
