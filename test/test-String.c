#include "main.h"
/**
 * main - check
 * Return: 0
 */
int main(void)
{
 char str1[] = "hello";
    char str2[] = "world";
        char str3[] = "";
printf("Formatted string: ");
    print_string(str1);
        printf("\n");

	    printf("Formatted string: ");
	        print_string(str2);
		    printf("\n");
printf("Formatted string: ");
    print_string(str3);
        printf("\n");
printf("Using vprintf: ");
    vprintf("Hello %s, the answer is %d\n", print_string, str1, 42);

        return 0;
}
