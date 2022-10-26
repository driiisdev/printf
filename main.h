#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list args, flags_t *f);
} print_t;

int _putchar(char c);
int _puts(char *str);

int get_flag(char s, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int (*get_print(char s))(va_list, flags_t *);

int _printf(const char *format, ...);

int print_char(va_list c, flags_t *f);
int print_string(va_list s, flags_t *f);

int print_int(va_list i, flags_t *f);
int print_unsigned(va_list u, flags_t *f);

int print_binary(va_list b, flags_t *f);
int print_oct(va_list o, flags_t *f);
int print_hex_lower(va_list x, flags_t *f);
int print_hex_upper(va_list X, flags_t *f);

int print_pointer(va_list p, flags_t *f);
int print_perc(va_list perc, flags_t *f);
int print_special_chars(va_list S, flags_t *f);
int print_rev(va_list r, flags_t *f);
int print_rot13(va_list R, flags_t *f);

#endif
