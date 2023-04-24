#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_i(va_list args);
int print_d(va_list args);
int print_percent(va_list args);
#endif
