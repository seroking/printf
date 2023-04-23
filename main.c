#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;

	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("yasser and med amine\n");
	_printf("%s\n", "yasser and med amine");
	_printf("%c\n", 'm');
	_printf("%d\n", 9);
	_printf("binary %b\n", 98);
	_printf("Unsigned:[%u]\n", 347698608);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", 32, 12);
	_printf("Character:[%c]\n", 'H');
	_printf("%%\n");
	return (0);
}