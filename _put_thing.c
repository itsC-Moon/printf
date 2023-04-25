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
 * Return: n of char print
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
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
