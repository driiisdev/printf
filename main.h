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
int _printf(const char *format, ...);
int print_char(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_binary(va_list b);
int print_oct(va_list o);
int print_hex_lower(va_list x);
int print_hex_upper(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_rev(va_list r);
int print_rot13(va_list R);

/**
		{'u', print_unsigned},
		{'o', print_octal},

		};
*/

#endif
