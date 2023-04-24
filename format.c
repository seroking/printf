								/*by yassir haouane and mohamed amine barid*/
#include "main.h"

/**
 * put_percent - prints a character
 *
 * @get_list: get the list of arguments
 *
 * Return: 1 (the amount of characters printed)
 */

int put_percent(__attribute__((unused))va_list get_list)
{
	_putchar('%');
	return (1);
}

/**
 * put_str - print a string
 *
 * @get_list: get the list of arguments
 *
 * Return: i (the amount of characters printed)
 */

int put_str(va_list get_list)
{
	int x;
	char *str;
	str = va_arg(get_list, char*);

	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);

	return (x);
}

/**
 * put_char - prints a character
 *
 * @list: get the list of argument
 *
 * Return: 1 (the amount of characters printed)
*/

int put_char(va_list get_list)
{
	_putchar(va_arg(get_list, int));
	return (1);
}
