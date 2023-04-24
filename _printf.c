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
num_chars += print_c(va_arg(args, int));
break;
case 's':
num_chars += print_s(va_arg(args, char *));
break;
case 'd':
case 'i':
num_chars += print_d(va_arg(args, int));
break;
case '%':
num_chars += print_percent();
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
