#include "main.h"
#include <stdio.h>


int _printf(const char *format, ...) {
	va_list args;
	va_start(args, format);

	int count = 0;
	for (; *format != '\0'; format++) {
		if (*format == '%') {
			format++;
			switch (*format) {
				case 'c': {
						  char c = (char) va_arg(args, int);
						  putchar(c);
						  count++;
						  break;
					  }
				case 's': {
						  char *s = va_arg(args, char *);
						  while (*s != '\0') {
							  _putchar(*s);
							  s++;
							  count++;
						  }
						  break;
					  }
				case 'd':
				case 'i': {
						  int value = va_arg(args, int);
						  print_int(value, &count);
						  break;
					  }
				case '%': {
						  _putchar('%');
						  count++;
						  break;
					  }
				default: {
						 // unsupported conversion specifier, do nothing
						 break;
					 }
			}
		} else {
			_putchar(*format);
			count++;
		}
	}

	va_end(args);
	return count;
}
