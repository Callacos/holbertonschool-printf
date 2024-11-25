#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print - Struct print
 *
 * @c: The character
 * @f: The function associated
 */

typedef struct print
{
	char p;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int get_printf(const char c, va_list ap);
void print_char(va_list ap);
void print_string(va_list ap);
void print_porcent(va_list ap);
int print_int(va_list ap);

#endif