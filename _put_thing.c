#include <unistd.h>
#include "main.h"
/**
 * _putchar - print char
 * @c: char
 * Return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
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
