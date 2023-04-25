#include "main.h"
#include <stdio.h>
/**
 * print_pointer - checks pointer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_pointer(va_list list)
{
unsigned long int p = va_arg(list, unsigned long int);
int count = 0;
putchar('0');
putchar('x');
count += 2;

if (p == 0)
{
putchar('0');
return (count + 1);
}
count += print_hex_recursion(p);
return (count);
}
/**
 * print_hex_recursion - Prints a number in hexadecimal notation
 * @n: number to print in hexadecimal notation
 * Return: number of characters printed
 */
int print_hex_recursion(unsigned long int n)
{
char *hex_digits = "0123456789abcdef";
int count = 0;
if (n / 16)
count += print_hex_recursion(n / 16);
putchar(hex_digits[n % 16]);
count++;
return (count);
}
