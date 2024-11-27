#include "main.h"
#include <stdio.h>
/**
 * get_unsigned - selects the correct function to print
 * @c: The character
 * @ap: The function associated
 * Return: 0
 */

int get_unsigned(const char c, va_list ap)
{
	int i = 0;
	int count = 0;

	print_t print[] = {
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