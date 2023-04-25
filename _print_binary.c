#include "main.h"
/**
 * print_binary - Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
unsigned int num;
int i, len;
char *s;
char *rev_s;
num = va_arg(list, unsigned int);
if (num == 0)
return (_write_char('0'));
if (num < 1)
return (-1);
len = base_len(num, 2);
s = malloc(sizeof(char) * len + 1);
if (s == NULL)
return (-1);
for (i = 0; num > 0; i++)
{
if (num % 2 == 0)
s[i] = '0';
else
s[i] = '1';
num = num / 2;
}
s[i] = '\0';
rev_s = rev_string(s);
if (rev_s == NULL)
return (-1);
write_base(rev_s);
free(s);
free(rev_s);
return (len);
}
