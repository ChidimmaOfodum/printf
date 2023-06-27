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
	write(1, &c, 1);
	return (0);
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

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}


/**
 * _putdigit - prints a digits to stdout
 * @d: Number to be printed
 * Return: digit count
 *
 */

int _putdigit(int d)
{
	int i = 0;

	if (d == 0)
		return (0);

	i = _putdigit(d / 10);
	_putchar('0' + (d % 10));

	return (i + 1);
}
