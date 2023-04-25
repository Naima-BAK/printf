#include "main.h"
/**
 * print_integer - prints an integer to stdout
 * @arg: The integer to print
 * Return: the number of digits printed
 */
int print_integer(va_list arg)
{
int n = va_arg(arg, int);
int digits = 0;
char buffer[20];
int i = 0;
if (n < 0)
{
putchar('-');
digits++;
n = -n;
}
if (n == 0)
{
putchar('0');
digits++;
}
else
{
int tmp = n;
while (tmp > 0)
{
tmp /= 10;
digits++;
}
while (n > 0)
{
buffer[i++] = '0' + (n % 10);
n /= 10;
}
while (i > 0)
{
putchar(buffer[--i]);
}
}
return (digits);
}
