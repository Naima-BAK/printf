#include "main.h"

int main(void)
{
	    int ret;

	        /* Basic tests */
	        ret = _printf("Hello, world!\n");
		    printf("Return value: %d\n\n", ret);

		        ret = _printf("The answer is %d.\n", 42);
			    printf("Return value: %d\n\n", ret);

			        ret = _printf("%s\n", "This is a string.");
				    printf("Return value: %d\n\n", ret);

				        ret = _printf("%c\n", 'A');
					    printf("Return value: %d\n\n", ret);

					        ret = _printf("%%\n");
						    printf("Return value: %d\n\n", ret);

						        /* Invalid format string tests */
						        ret = _printf("The answer is %d.\n", "forty-two");
							    printf("Return value: %d\n\n", ret);

							        ret = _printf("This is a %s with %d placeholders.\n", "string", 2, 3);
								    printf("Return value: %d\n\n", ret);

								        ret = _printf("%p\n", "This is not a pointer.");
									    printf("Return value: %d\n\n", ret);

									        ret = _printf("%z\n", "Invalid specifier.");
										    printf("Return value: %d\n\n", ret);

										        return (0);
}
