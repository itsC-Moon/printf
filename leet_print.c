#include "main.h"
/**
 * print - its damm f*cking  printf cheap copy
 * @ap: is va list
 * @format: char
 * Return: number char that print
 */
int print(va_list ap, char format)

{
	int buffer;
	int len = 0;

	switch (format)
	{
	case 's':
		len += _puts(va_arg(ap, char *));
		break;
	case 'c':
		_putchar(va_arg(ap, int));
		len++;
		break;
	case 'd':
	case 'i':
		buffer = va_arg(ap, int);
		print_number(buffer);
		len += _intlen(buffer);
		break;
	case '%':
		_putchar('%');
		len++;
		break;
	}
	return (len);
}