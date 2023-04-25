#include "main.h"
/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 * Return: The amount of characters printed
 */
int print_reversed(va_list arg)
{
int len;
char *str;
char *ptr;
str = va_arg(arg, char *);
if (str == NULL)
return (-1);
ptr = rev_string(str);
if (ptr == NULL)
return (-1);
for (len = 0; ptr[len] != '\0'; len++)
_write_char(ptr[len]);
free(ptr);
return (len);
}
