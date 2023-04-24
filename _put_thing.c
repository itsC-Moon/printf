#include <unistd.h>
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
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
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
