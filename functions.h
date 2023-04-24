#ifndef FUNCTIONS_H
#define FUNCTIONS_H
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
#endif
