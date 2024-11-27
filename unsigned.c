#include "main.h"
#include <stdio.h>
/**
 * print_number_base - display number in base
 * @num: Number to display
 * @base: Base
 * @uppercase: if true use uppercase letters
 * @count: Pointer for count caracters printed
 */
void print_number_base(unsigned int num, unsigned int base,
int uppercase, int *count)
{
	char digit;

	if (num / base)
	{
		print_number_base(num / base, base, uppercase, count);
	}

	digit = num % base;
	if (digit < 10)
	{
		_putchar(digit + '0');
	}
	else
	{
		_putchar(digit - 10 + (uppercase ? 'A' : 'a'));
	}

	(*count)++;
}

/**
 * print_unsigned - manages the display of the %u specifier (unsigned int)
 * @ap: List of variadic arguments
 *
 * Return: number of printed characters
 */
int print_unsigned(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;
	unsigned int base = 10;
	int uppercase = 0;

	print_number_base(num, base, uppercase, &count);

	return (count);
}

/**
 * print_octal - manages the display of the %o specifier (octal)
 * @ap: List of variadic arguments
 *
 * Return: Number of printed characters
 */
int print_octal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	print_number_base(num, 8, 0, &count);

	return (count);
}

/**
 * print_hex- manages the display of the %x specifier (hexadecimal)
 * @ap: List of variadic arguments
 *
 * Return: Number of printed characters
 */
int print_hex(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	print_number_base(num, 16, 0, &count);

	return (count);
}

/**
 * print_HEX - manages the display of the %X specifier (hexadecimal)
 * @ap: List of variadic arguments
 *
 * Return: Number of printed characters
 */
int print_HEX(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	print_number_base(num, 16, 1, &count);

	return (count);
}
