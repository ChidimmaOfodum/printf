#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	char buffer[1024];

	buffer[0] = c;
	write(1, &buffer[0], 1);
	return (1);
}

/**
 * _putstr - prints a string to stdout
 * @s: The string to print
 * Return: 0
 *
 */

int _putstr(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}


/**
 * _putdigit - prints a digits to stdout
 * @n: Number to be printed
 * Return: digit count
 *
 */

int _putdigit(int n)
{
	unsigned int x;
	int i = 0;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n;
		i++;
	}
	if (x / 10)
		i += _putdigit(x / 10);
	_putchar((x % 10) + '0');
	i++;

	return (i);
}
