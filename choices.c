#include "main.h"
/*Liyah Louis - Rayane Madoune */

/**
 * choices - Receives the main string and do the mix
 * @format: string that cointain format
 * @f_list: lsit of all existing format
 * @arg_list: list of the argument
 * Return: (the amount of characters printed)
 */

int choices(const char *format, convert_t f_list[], va_list arg_list)
{
	int count_print = 0;
	int x, y, count = 0;


	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			for (y = 0; f_list[y].letter != NULL; y++)
			{

				if (format[x + 1] == f_list[y].letter[0])
				{
				count = f_list[y].f(arg_list);
					if (count == -1)
						return (-1);
					count_print += count;
					break;
				}
			}
			if (f_list[y].symbol == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					_putchar(format[x]);
					_putchar(format[x + 1]);
					count_print = count_print + 2;
				}
				else
					return (-1);
			}
			x++;
		}
		else
		{
			_putchar(format[x]);
			count_print++;
		}
	}
	return (count_print);
}
