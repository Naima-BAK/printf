#include "main.h"
/**
 * print_hex - Prints a decimal number on base 16 (lowercase)
 * @list: List of args.
 * Return: number of characters printed.
 */

int print_hex(va_list list)
{
unsigned int count;
int size, count2;
char *hex, *hex_rev;

count = va_arg(list, unsigned int);

if (count == 0)
return (_write_char('0'));
if (count < 1)
return (-1);
size = base_len(count, 16);
hex = malloc(sizeof(char) * size + 1);
if (hex == NULL)
return (-1);
for (size = 0; count > 0; size++)
{
count2 = count % 16;
if (count2 > 9)
{
count2 = hex_check(count2, 'x');
hex[size] = count2;
}
else
hex[size] = count2 + 48;
count = count / 16;
}
hex[size] = '\0';
hex_rev = rev_string(hex);
if (hex_rev == NULL)
return (-1);
write_base(hex_rev);
free(hex);
free(hex_rev);
return (size);
}
