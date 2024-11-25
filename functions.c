#include "main.h"
#include <stdio.h>

/**
* print_char - print a charactere c
* @ap: argument
*
* Return: 0
*/

void print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (0);
}

/**
* print_string - print a string with a charactere s
* @ap: argument
*
* Return: 0
*/

void print_string(va_list ap)
{
	_putchar(va_arg(ap, char *));
	return (0);
}

/**
* print_porcent - print a pourcent with a charactere %
* @ap: argument
*
* Return: 0
*/

void print_porcent(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (0);
}