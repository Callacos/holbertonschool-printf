#include "main.h"
#include <stdio.h>

/**
* print_char - print a charactere c
* @ap: argument
*
* Return: 0
*/

int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
* print_string - print a string with a charactere s
* @ap: argument
*
* Return: 0
*/

int print_string(va_list ap)
{
    char *str = va_arg(ap, char *);
    int count = 0;

    if (str == NULL)
    {
        str = "(null)";
    }

    while (*str)
	{
        putchar(*str);
        str++;
        count++;
    }
    return (count);
}
/**
* print_porcent - print a pourcent with a charactere %
* @ap: argument
*
* Return: 0
*/

int print_porcent(va_list ap)
{
    (void)ap;
	_putchar('%');
	return (1);
}
/**
 * print_number - Affiche un entier
 * @n: L'entier à afficher
 */
void print_number(int n, int *count)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
        (*count)++;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10, count);
	}
	_putchar((num % 10) + '0');
    (*count)++;
}



/**
 * print_int - Gère l'affichage des spécificateurs %d et %i
 * @ap: Liste d'arguments
 *
 * Return: Nombre de caractères imprimés
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int count = 0;

	print_number(n, &count);

	return (count);
}