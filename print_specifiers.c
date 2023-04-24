#include <stdio.h>
#include <stdarg.h>
#include "print_specifiers.h"
/**
 * print_c - Prints a character
 * @args: A list of arguments
 * Return: The number of characters printed
 */
int print_c(va_list args)
{
char c = (char) va_arg(args, int);
putchar(c);
return (1);
}
/**
 * print_s - Prints a string
 * @args: A list of arguments
 * Return: The number of characters printed
 */
int print_s(va_list args)
{
char *s = va_arg(args, char *);
int num_chars = 0;
while (*s != '\0')
{
putchar(*s);

s++;
num_chars++;
}
return (num_chars);
}
/**
 * print_i - Prints integer
 * @args: A list of arguments
 * Return: The number of integer
 */
int print_i(va_list args)
{
int d = va_arg(args, int);
printf("%d", d);
return (snprintf(NULL, 0, "%d", d));
}
/**
 * print_d - Prints integer
 * @args: A list of arguments
 * Return: The number of integer
 */
int print_d(va_list args)
{
int d = va_arg(args, int);
printf("%d", d);
return (snprintf(NULL, 0, "%d", d));
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
