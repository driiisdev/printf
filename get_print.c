#include "main.h"
/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_types[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	print_t func_types[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex_lower},
		{'X', print_hex_upper},
		{'b', print_binary},
		{'o', print_oct},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_special_chars},
		{'p', print_pointer},
		{'%', print_perc}
		};

	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
	{
		if (func_types[i].t == s)
		{
			return (func_types[i].f);
		}
	}

	return (NULL);
}
