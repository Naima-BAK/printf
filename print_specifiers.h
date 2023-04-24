#ifndef PRINT_SPECIFIERS_H
#define PRINT_SPECIFIERS_H
#include <stdarg.h>
int print_c(va_list args);
int print_s(va_list args);
int print_i(va_list args);
int print_d(va_list args);
int print_percent(va_list args);
#endif
