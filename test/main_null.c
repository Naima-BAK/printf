#include <stdio.h>

/**
 * main - test for NULL string
 *
 * Return: Always 0
 */
int main(void)
{
printf(NULL);
_printf(NULL);

printf("Test: %s\n", NULL);
_printf("Test: %s\n", NULL);

printf("%s\n", NULL);
_printf("%s\n", NULL);
return (0);
}
