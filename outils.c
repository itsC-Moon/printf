/**
 * _strlen - len of str
 * @str: char
 * Return: len of str
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
/**
 * _intlen - len of int
 * @n: int
 * Return: len of int
 */
int _intlen(int n)
{
	int i = 0;

	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
/**
 * u_intlen - len of int
 * @n: unsigned int
 * Return: len of int
 */
unsigned int u_intlen(unsigned int n)
{
	unsigned int i = 1;

	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
