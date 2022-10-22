# printf
## Description.

This printf project is a joint work of Idris Yakub and Nkosinathi Radebe, software engineering student at ALX_AFICA. The custom '_printf' is a replicate of the actual C standard library printf() function.

What you would learn from this project:

* How to use git in a team setting
* Applying variadic functions to big projects
* The complexities of printf
* Managing a lot of flies and finding a good workflow
---
## Prototype
    int _printf(const char *format, ...);

## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 20.04.1 LTS using GCC 9.4.0 with the command `gcc -Wall -Werror -Wextra -pedantic *.c`
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: `_printf("format string", arguments...)` where format string can contain conversion specifiers and flags, along with regular characters.

The **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

    %[flags][length]specifier

If the program runs successfully, the return value is the amount of chars printed.

| Specifier | Output              |
| --------- | ------------------- |
| c         | Character           |
| d or i    | Decimal integer     |
| s         | String              |
| b         | Binary              |
| %         | Percentage charater |
| o         | Signed Octal        |
| u         | Unsigned Integer    |
| x         | Unsigned Hexadecimal|
| X         | Unsigned Hexadecimal (uppercase) |
| p         | Pointer address     |
| r         | Reversr string of characters |
| R         | ROT13 translaton of string |
| S         | String with special chars replaced by their ASCII value |

## Examples
Printing a Character:

   - Input: `_printf("The first letter in the alphabet is %c\n", 'A');`
   - Output: `The first letter in the alphabet is A`

Print an String:

   - Input: `_printf("Hello %s.", "ALX School");`
   - Output: `Hello ALX School`

Printing a Integer:

   - Input: `_printf("2 + 2 is equal to %d.", 4);`
   - Output: `2 + 2 is equal to 4`

Printing a Decimal:

   - Input: `_printf("%b\n", 10010);`
   - Output: `18 in binary is 10010`

---

## File Functions

### _printf.c

contains the fucntion `_printf`, which uses the prototype `int _printf(const char *format, ...)`;. The format string is composed of zero or more directives. See `man 3 printf` for more detail. `_printf` will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to **stdout**, the standard output stream.

### _putchar.c

contains the function `_putchar`, which writes a character to stdout.

### main.h

contains all function prototypes used for `_printf`.

### man_3_printf

manpage file

### print_char.c

Function that writes the Buffer Character.

    /* Indetifier : %c */

### print_int.c

Function that Prints an Integer.

    /* Indetifier : %i or %d */

### print_string.c

Function that Prints out a String.

    /* Indetifier : %s */

### print_binary.c

Function that Prints a Binary.

    /* Indetifier : %b */

### print_perc.c

Function that Prints a Percentage symbol.

    /* Indetifier : %% */

### print_oct.c

Function that Prints Decimal in Octal.

	/* Indetifier : %o */

### print_hex.c

Function that Prints Decimal in Hexadecimal.

	/* Indetifier : %x */

### parse_x_X.c

Function that prints Decimal in Uppercase Hexadecimal.

	/* Indetifier : %X */

### parse_unit.c

Function that Prints an Unsigned Integer.

	/* Indetifier : %u */

### parse_buff.c

Function that Prints the Buffer

### CONTRIBUTION.md

Documentation stating the styleguide on how the work flow was carried out.

### .gitignore

Files to be ignored when pushing to github.

## Authors
[Idris Yakub](https://github.com/driiisdev) | [@driiisdev](https://twitter.com/driiisdev)

[Nkosinathi Radebe](https://github.com/nkradebeJHB) | [@nkradebeJHB](https://twitter.com/nkradebeJHB)