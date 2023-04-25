#include "main.h"
/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
int count;
count = print_number(list);
return (count);
}
