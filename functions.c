#include "main.h"
#include "functions.h"
#include <stdio.h>
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
 * print_int - Prints an integer
 * @args: A va_list pointing to the integer to be printed
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
int num_digits = 0;

if (n < 0)
{
putchar('-');
num_digits++;
n = -n;
}

if (n / 10)
num_digits += print_int(args);

putchar((n % 10) + '0');
num_digits++;

return (num_digits);
}
