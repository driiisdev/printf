#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @r: string
 * Return: int
 */

int print_rev(va_list r)
{
int i = 0, j;
char *s = va_arg(r, char *);

if (!s)
{
    s = "(null)";
}

while (s[i])
{
    i++;
}

for (j = i - 1; j >= 0; j--)
{
    _putchar(s[j]);
}

return (i);
}
