#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a custom printf function
 * @format: format specifiers
 * Return: Number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	int i = 0;
	

	va_list(ap);
	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					 _putchar(va_arg(ap, int));
					break;
				case 's':
					 _putstr(va_arg(ap, char *));
					break;
				case '%':
					_putchar('%');
					break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (i);
}
