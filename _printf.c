#include "main.h"
#include <stdio.h>

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
int count;
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"u", unsigned_integer},
{"b", print_binary},
{NULL, NULL}
};

va_list arg_list;

if (format == NULL)
{
return (-1);
}

va_start(arg_list, format);
count = parser(format, f_list, arg_list);
va_end(arg_list);

return (count);
}
