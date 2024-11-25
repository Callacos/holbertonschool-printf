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
	int i;
	int j;

	print_t print[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_porcent},
		{NULL, NULL}
	};

	while (print[i].p)
	{
		if (print[i].p == c)
		{
			print[i].f(ap);
		}
		i++;
	}
	return (0);
}
