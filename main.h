#ifndef MAIN_H
#define MAIN_H

/**
 * struct conversion - struct to choose symbol
 *@letter : the symbol after the "%" (c / s)
 *@f : pointer function
 */

typedef struct conversion
{

	int (*f)(va_list);
	char *letter;

} convert_t;


								/* STANDARS LIBRARIES */
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>

								/* FUNCTIONS FOR TASK 0 */

int _printf(const charformat, ...);



								/* FORMAT FUNCTIONS */
int put_char(va_list get_list);
int put_str(va_list get_list);
int put_percent(__attribute__((unused))va_list get_list);


#endif
