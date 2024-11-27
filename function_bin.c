#include "main.h"
#include <stdarg.h>

/**
 * print_binary - Prints an unsigned int as binary
 * @ap: List of variadic arguments
 * Return: Number of characters printed
 */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;
	char binary[32];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i++] = (num % 2) + '0';
		num /= 2;
	}

	while (--i >= 0)
	{
		_putchar(binary[i]);
		count++;
	}

	return (count);
}
