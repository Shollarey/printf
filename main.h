#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list args);
int printf_string(va_list args);
<<<<<<< HEAD
int printf_i(va_list args);
int printf_d(va_list args);
int print_rot13(va_list list);
int print_String(va_list l)
int isNonAlphaNumeric(char c);
char *convert(unsigned long int num, int base, int lowercase);
int printf_HEX(va_list val);
int printf_bin(va_list val);
int print_hex_aux(unsigned long int num);
int printf_oct(va_list val);
int print_pointer(va_list val);
int print_rev(va_list l);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_unsigned(va_list args);
int printf_hex(va_list val);

=======
int print_37(void);

>>>>>>> 11fcd0ed71cb6e1ec83d8cded6aa406c5c3207b7
#endif
