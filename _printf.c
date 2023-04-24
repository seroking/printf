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


}
