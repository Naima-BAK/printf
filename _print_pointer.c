#include "main.h"
#include <stdint.h>

/**
 * print_hl - convert unsigned int in hexadecimal
 *@n: unsigned int
 * Return: numer times print
 */
int print_hl(uintptr_t n)
{
	uintptr_t quotient, temp;

	int cont = 1, cont2;
	char hexadecimalNumber[100];
	int count = 0;

	quotient = n;
	while (quotient != 0)
	{
		temp = quotient % 16;

		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;

		hexadecimalNumber[cont++] = temp;
		quotient = quotient / 16;
	}
	for (cont2 = cont - 1 ; cont2 > 0; cont2--, count++)
		_write_char(hexadecimalNumber[cont2]);

	return (count);
}

/**
 * print_pointer - prints address of input in hexa format
 *
 * @valist: va_list args
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_pointer(va_list valist)
{
	char c = 'p';
	int count = 0;
	uintptr_t p;
	void *pi;


	switch (c)
	{
	case 'p':
		pi = va_arg(valist, void *);
		p = (uintptr_t)pi;

		if (pi == NULL)
		{
			_printf("(nil)");
			count += 5;
		}
		else
		{
			_write_char('0');
			_write_char('x');
			count += 2;
			count += print_hl(p);
		}
		break;
	default:
		count += 2;
		_write_char('%');
		_write_char(c);
	}
	return (count);
}
