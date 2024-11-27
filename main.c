#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("String reverse:[%r]\n", "I am a string !");
	printf("String reverse:[%r]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", 10);
	printf("Len:[%d]\n", 10);
	_printf("Len:[%i]\n", 10);
	printf("Len:[%i]\n", 10);
	_printf("Unsigned:[%u]\n", 10);
	printf("Unsigned:[%u]\n", 10);
	_printf("Octal:[%o]\n", 10);
	printf("Octal:[%o]\n", 10);
	_printf("Hexadecimal:[%x]\n", 10);
	printf("Hexadecimal:[%x]\n", 10);
	_printf("HEX:[%X]\n", 10);
	printf("HEX:[%X]\n", 10);
	_printf("Unknown:[%w]\n");
	printf("Unknown:[%w]\n");
	_printf("Unknown:[%]\n");
	printf("Unknown:[%]\n");
	_printf("Unknown:[%c]\n", 10);
	printf("Unknown:[%c]\n", 10);
	return (0);
}
