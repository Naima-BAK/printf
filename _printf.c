#include "main.h"
#include "functions.h"

/**
 * _printf - produces output according to a format.
 * @format: character string containing directives.
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);
if (!format)
return (-1);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
count += print_char(args);
else if (*format == 's')
count += print_string(args);
else if (*format == '%')
{
putchar('%');
count++;
}
else
return (-1);
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
