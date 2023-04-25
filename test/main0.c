#include "main.h"

int main(void)
{
	    int count;

	        /* Test case 1 */
	        count = _printf("Hello, world!\n");
		    printf("Count: %d\n", count);

		        /* Test case 2 */
		        count = _printf("The answer is %d\n", 42);
			    printf("Count: %d\n", count);

			        /* Test case 3 */
			        count = _printf("The answer is %d%%\n", 42);
				    printf("Count: %d\n", count);

				        /* Test case 4 */
				        count = _printf("The character is %c\n", 'A');
					    printf("Count: %d\n", count);

					        /* Test case 5 */
					        count = _printf("The string is %s\n", "Hello, world!");
						    printf("Count: %d\n", count);

						        return (0);
}
