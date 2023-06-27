#include "main.h"

int put_char(va_list printf_arg);
int put_str(va_list printf_arg);
int put_mod(va_list printf_arg);

/**
 * put_char - The function that prints characters
 * @printf_arg: The va_list
 * Return: Each character
 */

int put_char(va_list printf_arg)
{
	char c;

	c = va_arg(printf_arg, int);
	write(1, &c, 1);
	return (1);
}


/**
 * put_str - The function that prints string
 * @printf_arg: The va_list
 * Return: The string length
 */

int put_str(va_list printf_arg)
{
	char *str;
	int idx = 0, len = 0;

	str = va_arg(printf_arg, char *);
	if (str == NULL)
		return (0);
	while (str[idx] != '\0')
	{
		write(1, &str[idx], 1);
		len++;
		idx++;
	}
	return (len);
}

/**
 * put_mod - The function that prins percentage '%'
 * @printf_arg: The va_list
 * Return: 1
 */

int put_mod(va_list printf_arg)
{
	char m;

	UNUSED(printf_arg);
	m = '%';
	write(1, &m, 1);
	return (1);
}
