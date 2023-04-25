#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list arg);
int print_string(va_list arg);
int print_integer(va_list arg);
int print_percent(void);
#endif
