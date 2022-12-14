#include "main.h"

/**
 * print_num_rec - prints an integer recursively
 * @n: Integer
 */
void print_num_rec(int n)
{
unsigned int num = n;

if (num / 10)
{
    print_num_rec(num / 10);
}

_putchar((num % 10) + '0');
}


/**
 * print_number - prints an integer
 * @i: Integer
 * Return: int
 */
int print_int(va_list i)
{
unsigned int n = va_arg(i, int);
int count = 1, num = n;

if (num < 0)
{
    _putchar('-');
    num *= -1;
    n = num;
    count += 1;
}

while (n > 9)
{
    n /= 10;
    count++;
}

print_num_rec(num);

return (count);
}
