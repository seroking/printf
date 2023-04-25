#include "main.h"

/**
 * print_int - function that print char handling %c
 *
 * @list: list
 *
 * Return: 1
 */

void print_int(int value, int *count)
{
	if (value < 0)
	{
		_putchar('-');
		*count += 1;
		value = -value;
	}
	if (value >= 10)
	{
		print_int(value / 10, count);
	}
	_putchar('0' + (value % 10));
	*count += 1;
}
