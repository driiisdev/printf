#include "main.h"
/**
 * print_special_chars - convert to special chars
 * @S: argument
 * Return: int
 */

int print_special_chars(va_list S)
{
int i, len = 0;
char *schr = va_arg(S, char *);
unsigned int h;
char nl[] = "(null)";

if (!schr)
{
for (i = 0; nl[i]; i++)
_putchar(nl[i]);
return (i);
}

for (i = 0; schr[i] != '\0'; i++)
{

if (schr[i] < 32 || schr[i] >= 127)
{
_putchar(92);
_putchar(120);
len = len + 2;
h = schr[i];
if (h < 16)
{
_putchar (48),
len++;
}
len = len + print_hex(h, 1);
}
else
{
_putchar(schr[i]),
len++;
}
}

return (len);
}
