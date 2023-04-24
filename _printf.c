#include "main.h"
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
int num_chars = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
num_chars += print_c(args);
break;
case 's':
num_chars += print_s(args);
break;
case 'd':
case 'i':
num_chars += print_d(args);
break;
case '%':
num_chars += print_percent(args);
break;
default:
break;
}
}
else
{
putchar(*format);
num_chars++;
}
format++;
}
va_end(args);
return (num_chars);
}
