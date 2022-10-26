#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);

// int get_flag(char s);
// char *convert(unsigned long int num, int base, int lowercase);
// int (*get_print(char s))(va_list);

int _printf(const char *format, ...);

int print_char(va_list c);
int print_string(va_list s);

int print_int(va_list i);
int print_unsigned(va_list u);

int print_binary(va_list b);
int print_oct(va_list o);
int print_hex_lower(va_list x);
int print_hex_upper(va_list X);

int print_pointer(va_list p);
int print_special_chars(va_list S);
int print_rev(va_list r);
int print_rot13(va_list R);

int print_perc(va_list perc);

#endif
