#include "main.h"

/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string.
 * @funcList: A list of all the possible functions.
 * @agrsList: A list containing all the argumentents passed to the program.
 * Return: number of characters printed.
 */
int parser(const char *format, conver_t funcList[], va_list agrsList)
{
int i, j, value, count;

count = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; funcList[j].sym != NULL; j++)
{
if (format[i + 1] == funcList[j].sym[0])
{
value = funcList[j].f(agrsList);
if (value == -1)
return (-1);
count += value;
break;
}
}
if (funcList[j].sym == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_write_char(format[i]);
_write_char(format[i + 1]);
count = count + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_write_char(format[i]);
count++;
}
}
return (count);
}
