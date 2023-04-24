#include "main.h"
#include "functions.h"
/**
 * _printf - produces output according to a format.
 * @format: character string containing directives.
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
va_list args;
int i, count = 0;
if (format == NULL)
return (-1);

va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
return (-1);
i++;
while (format[i] == ' ')
i++;
if (format[i] == '%')
count += print_percent(args);
else if (format[i] == 'c')
count += print_char(args);
else if (format[i] == 's')
count += print_string(args);
else if (format[i] == 'i')
count += print_int(args);
else if (format[i] == 'd')
count += print_int(args);
}
else
{
putchar(format[i]);
count++;
}
}

va_end(args);
return (count);
}
