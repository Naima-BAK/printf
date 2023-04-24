#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - Prints a character
 * @args: A list of arguments
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
putchar(c);
return (1);
}
/**
 * print_string - Prints a string
 * @args: A list of arguments
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
char *s = va_arg(args, char *);
int count = 0;
while (*s)
{
putchar(*s);
count++;
s++;
}
return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: A list of arguments
 * Return: The number of characters printed
 */
int print_percent(va_list args)
{
(void) args;
putchar('%');
return (1);
}
/**
 * _printf - produces output according to a format.
 * @format: character string containing directives.
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
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
