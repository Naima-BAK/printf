#include "main.h"
/**
 * print_heX - Prints a decimal number on base16 (Uppercase).
 * @list: List of the arguments.
 * Return: number of characters printed.
 */
int print_heX(va_list list)
{
unsigned int count;
int size, count2;
char *heX;
char *heX_rev;

count = va_arg(list, unsigned int);

if (count == 0)
return (_write_char('0'));
if (count < 1)
return (-1);
size = base_len(count, 16);
heX = malloc(sizeof(char) * size + 1);
if (heX == NULL)
return (-1);
for (size = 0; count > 0; size++)
{
count2 = count % 16;
if (count2 > 9)
{
count2 = hex_check(count2, 'X');
heX[size] = count2;
}
else
heX[size] = count2 + 48;
count = count / 16;
}
heX[size] = '\0';
heX_rev = rev_string(heX);

if (heX_rev == NULL)
return (-1);

write_base(heX_rev);
free(heX);
free(heX_rev);
return (size);
}
