#ifndef MAIN_H
#define MAIN_H
#include <stdint.h>

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
char *sym;
int (*f)(va_list);
};
typedef struct convert conver_t;

/**
 * union pointer - union variable to handle pointer byte to byte
 * @ptr: void pointer to store a pointer.
 * @c: char array to handle each byte in ptr.
 */
typedef union pointer
{
	void *ptr;
	char c[sizeof(void *)];
} my_pointer;

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int unsigned_integer(va_list);
int print_unsgined_number(unsigned int);
int print_binary(va_list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int hex_check(int num, char x);
int print_heX(va_list list);
int print_hex(va_list list);
int print_octal(va_list list);
int rot13(va_list);
int print_reversed(va_list arg);
int print_hl(uintptr_t n);
int print_pointer(va_list valist);
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);
#endif
