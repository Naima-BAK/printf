#include "main.h"
/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_write_char(str[i]);
}
