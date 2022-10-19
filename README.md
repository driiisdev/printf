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
* All files were created and compiled on Ubuntu 20.04.1 LTS using GCC 9.4.0 with the command gcc -Wall -Werror -Wextra -pedantic *.c
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: `_printf("format string", arguments...)` where format string can contain conversion specifiers and flags, along with regular characters.

The **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

    %[flags][length]specifier

If the program runs successfully, the return value is the amount of chars printed

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
* `_printf("Hello, Holberton\n")` prints "Hello, ALX_AFRCA", followed by a new line
* `_printf("%s", "Hello")` prints "Hello"
* `_printf("This is a number: %d", 98)` prints "This is a number: 98"