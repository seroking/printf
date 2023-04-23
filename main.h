#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define BUFF_SIZE 1024
int _printf(const charformat, ...);
int _check(va_list list, char c);
int _putchar(char c);
int _strlen(char s);
int _print_str(charstr);
int _print_bin(unsigned int n);
int _print_unsigned_int(unsigned int n, int base, char *digit);
int _print_int(int n);
#endif