#include "main.h"

/* BY YASSIR HAOUANE AND MOHAMED AMINE BARID*/
/**
 * _print_bin - function that convert Dic To Bin
 *
 * @list: list
 *
 * Return: c
 */

int _print_bin(va_list list)
{
	char *p;
	int c = 0;

	p = _magic(va_arg(list, unsigned int), 2);

	c = print((p != NULL) ? p : "NULL");

	return (c);
}


/* BY YASSIR HAOUANE AND MOHAMED AMINE BARID*/
/**
 * _print_octal - function that convert Dic To octal
 *
 * @list: list
 *
 * Return: c
 */

int _print_octal(va_list list)
{
	char *p;
	int c = 0;

	p = _magic(va_arg(list, unsigned int), 8);

	c = print((p != NULL) ? p : "NULL");

	return (c);
}

/* BY YASSIR HAOUANE AND MOHAMED AMINE BARID*/
/**
 * _print_low_hexa - function that convert Dic To lower hexa
 *
 * @list: list
 *
 * Return: c
 */

int _print_low_hexa(va_list list)
{
	char *p;
	int c = 0;

	p = _magic(va_arg(list, unsigned int), 16);

	c = print((p != NULL) ? p : "NULL");

	return (c);
}


/* BY YASSIR HAOUANE AND MOHAMED AMINE BARID*/
/**
 * _print_big_hexa - function that convert Dic To big hexa
 *
 * @list: list
 *
 * Return: c
 */

int _print_big_hexa(va_list list)
{
	char *p;
	int c = 0;

	p = _magic(va_arg(list, unsigned int), 16);
	p = _to_upper(p);

	c = print((p != NULL) ? p : "NULL");

	return (c);
}
