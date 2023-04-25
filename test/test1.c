#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 */
int main(void)
{
int len;

    len = _printf("Let's try to printf a simple sentence.\n");
        _printf("Length: %d\n", len);
	    len = _printf("%s", "This is a string.\n");
	        _printf("Length: %d\n", len);
		    len = _printf("Character: %c\n", 'A');
		        _printf("Length: %d\n", len);
			    len = _printf("Decimal: %d\n", 123);
			        _printf("Length: %d\n", len);
				    len = _printf("Hexadecimal: %x\n", 255);
				        _printf("Length: %d\n", len);
					    len = _printf("Unsigned: %u\n", 123456789);
					        _printf("Length: %d\n", len);
						    len = _printf("Percent: %%\n");
						        _printf("Length: %d\n", len);

							    return (0);
}
