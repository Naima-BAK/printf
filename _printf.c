#include "main.h"
/**
 * print_string - prints a string to stdout
 * @arg: the string to print
 * Return: the number of characters printed
 */
int print_string(va_list arg)
{
char *s = va_arg(arg, char *);
int len = 0;
unsigned long int i = 0;
if (s == NULL)
{
const char null_str[] = "(null)";
for (i = 0; i < sizeof(null_str); i++)
{
putchar(null_str[i]);
len++;
}
}
else
{
for (i = 0; s[i] != '\0'; i++)
{
putchar(s[i]);
len++;
}
}
return (len);
}
/**
 * print_char - print char
 * @args: arguments
 * Return: char
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
putchar(c);
return (1);
}
/**
 * print_percent - prints a percent sign to stdout
 * Return: the number of characters printed
 */
int print_percent(void)
{
return (putchar('%'));
}
/**
 * _printf - produces output according to a format
 * @format: a string containing zero or more directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
unsigned int i, len = 0;
va_list arg;
va_start(arg, format);
for (i = 0; format && format[i]; i++)
{
if (format[i] == '%')
{
i++;
while (format[i] == ' ')
i++;
if (format[i] == '\0')
return (-1);
if (format[i] == '%')
len += print_percent();
else if (format[i] == 'c')
len += print_char(arg);
else if (format[i] == 's')
len += print_string(arg);
else if (format[i] == 'd' || format[i] == 'i')
len += print_integer(arg);
else
{
len += putchar('%');
len += putchar(format[i]);
}
}
else
len += putchar(format[i]);
}
va_end(arg);
return (len);
}
