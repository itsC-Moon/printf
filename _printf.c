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
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			while(format[i+1] == ' ')
				i++;
			switch (format[i + 1])
			{
			case 's':
			case 'c':
			case 'i':
			case 'd':
			case '%':
				len += print(ap, format[i + 1]);
				i++;
				break;
			default:
				_putchar('%');
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
