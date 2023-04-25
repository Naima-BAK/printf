
#include "main.h"

/**
 * print_octal - prints the numeric number in octal base.
 * @list: list of all the arguments.
 * Return: number of characters printed.
 */

int print_octal(va_list list)
{
unsigned int count;
int size;
char *octal_num;
char *str;

count = va_arg(list, unsigned int);

if (count == 0)
return (_write_char('0'));

if (count < 1)
return (-1);

size = base_len(count, 8);

octal_num = malloc(sizeof(char) * size + 1);

if (octal_num == NULL)
return (-1);

for (size = 0; count > 0; size++)
{
octal_num[size] = (count % 8) + 48;
count = count / 8;
}

octal_num[size] = '\0';
str = rev_string(octal_num);

if (str == NULL)
return (-1);

write_base(str);
free(octal_num);
free(str);

return (size);
}
