#include "main.h"
#include <stdio.h>
/**
 * print_pointer - checks pointer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_pointer(va_list list)
{
void *p = va_arg(list, void *);
printf("%p", p);
return (sizeof(void *));
}
