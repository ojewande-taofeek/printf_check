#include "main.h"

/**
 * _printf - The fucntion that prints various inputs of different formats
 * @format: The string supplied to be printed
 * Return: 0, if successful
 */

int _printf(const char *format, ...)
{
	va_list printf_arg;
	int idx = 0;

	va_start(printf_arg, format);

	if (format)
	{
		while (format[idx])
		{
			if (format[idx] == "%")
			{
				idx++;
				switch (format[idx])
				{
					case 'c':
						_putchar(va_arg(printf_arg, char));
						break;
					case 's':
						print_str(va_arg(printf_arg, char *));
						break;
					case '%':
						_putchar('%');
						break;
				}
			}
			else
				_putchar(format[idx]);
			idx++;
		}
	}
	va_end(printf_arg);
	return (0);
}
