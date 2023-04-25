#include "main.h"
/**
 * _printf - its damm f*cking  printf
 * @format: char
 * Return: number char that print
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list ap;
	int len = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
			case 's':
			case 'c':
			case 'i':
			case 'd':
				len += print(ap, format[i + 1]);
				i++;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
