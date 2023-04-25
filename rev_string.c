#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
int len;
int head;
char tmp;
char *dest;
for (len = 0; s[len] != '\0'; len++)
{}
dest = malloc(sizeof(char) * len + 1);
if (dest == NULL)
return (NULL);
_memcpy(dest, s, len);
for (head = 0; head < len; head++, len--)
{
tmp = dest[len - 1];
dest[len - 1] = dest[head];
dest[head] = tmp;
}
return (dest);
}

