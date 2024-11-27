#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @ap: argument
 * Return: Number of characters printed
 */

int print_rev(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i = 0, count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i])
	{
		i++;
	}

	while (i > 0)
	{
		_putchar(str[i - 1]);
		i--;
		count++;
	}

	return (count);
}
