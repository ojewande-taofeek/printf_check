#include "main.h"

int _putchar(char s);
void print_str(char *s);


/**
 * _putchar - The function that prints characters
 * @s: The formal parameter of s
 * Return: Each character
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}


/**
 * print_str - The function that prints string
 * @s: The pointer to a string constant
 * Return: The string length
 */

int print_str(char *s)
{
	int idx = 0, len = 0;

	while (s[idx])
	{
		_putchar(s[idx]);
		idx++;
		len++;
	}
	return (len);
}
