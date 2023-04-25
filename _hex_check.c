#include "main.h"
/**
 * hex_check - Checks for hex function.
 * @num: a number to convert.
 * @x: hex function.
 * Return: ASCII for a letter.
 */
int hex_check(int num, char x)
{
char *hex = "abcdef";
char *Hex = "ABCDEF";

num = num - 10;

if (x == 'x')
{
return (hex[num]);
}
else
{
return (Hex[num]);
}

return (0);
}
