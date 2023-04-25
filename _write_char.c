#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * _write_char - writes the character.
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _write_char(char c)
{
return (write(1, &c, 1));
}
