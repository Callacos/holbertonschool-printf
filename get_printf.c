#include "main.h"
#include <stdio.h>

/**
 * get_printf - selects the correct function to print
 * @c: The character
 * @ap: The function associated
 * Return: 0
 */

int get_printf(const char c, va_list ap)
{
	int i = 0;
	int count = 0;

	print_t print[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_porcent},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'\0', NULL}
	};

	while (print[i].p)
	{
		if (print[i].p == c)
		{
			count = print[i].f(ap);
			return (count);
		}
		i++;
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
