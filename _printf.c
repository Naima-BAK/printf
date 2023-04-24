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
int i = 0;
va_list args;
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
return (-1);
i++;
while (format[i] == ' ')
i++;
if (format[i] == '%')
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
i++;
}
va_end(args);
return (count);
}
