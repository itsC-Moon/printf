#include <unistd.h>
#include "main.h"
/**
 * _putchar - print char
 * @c: char
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - print string
 * @s: pointer to string
 * Return: n of char print
 */
int _puts(char *s)
{
	int i, len;

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
/**
 * print_binary - print numbers bin
 * @number: integer params
 * @len: count
 * Return: 0
 */
void print_binary(unsigned int number, int *len)
{
	if (number >> 1)
	{
		print_binary(number >> 1, len);
		*len = *len + 1;
	}
	_putchar((number & 1) ? '1' : '0');
}
/**
 * print_unsigned - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_unsigned(unsigned int n)
{

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
