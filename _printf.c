#include "main.h"

int printf(const char *format, ...)
{
	int count_print;

	convert_t list_format[] = {
		{"c", put_char},
		{"s", put_str},
		{"%", put_percent},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	count_print = choices(format, list_f, args);
	va_end(args);

	return (count_print);
}
}
