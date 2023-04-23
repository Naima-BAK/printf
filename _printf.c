#include <main.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
char c, *s;
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = va_arg(args, int);
putchar(c);
count++;
break;
case 's':
s = va_arg(args, char*);
while (*s)
{
putchar(*s);
s++;
count++;
}
break;
case '%':
putchar('%');
count++;
break;
}
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
