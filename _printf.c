#include "main.h"

/**
 * _printf - The fucntion that prints various inputs of different formats
 * @format: The string supplied to be printed
 * Return: 0, if successful
 */

int _printf(const char *format, ...)
{
	va_list printf_arg;
	int idx = 0, len = 0, num;
	char character;
	char *str;

	va_start(printf_arg, format);

	if (format)
	{
		while (format[idx])
		{
			if (format[idx] == '%')
			{
				idx++;
				len++;
				switch (format[idx])
				{
					case 'c':
						character = va_arg(printf_arg, int);
						_putchar(character);
						break;
					case 's':
						str = va_arg(printf_arg, char *);
						print_str(str);
						break;
					case '%':
						_putchar('%');
						break;
					case 'i':
					case 'd':
						num = va_arg(printf_arg, int);
						print_digit(num);
						break;
				}
			}
			else
				_putchar(format[idx]);
			idx++;
			len++;
		}
	}
	va_end(printf_arg);
	return (len);
}
