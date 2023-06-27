#include "main.h"

/**
 * f_caller- The function pointer that calls the required function
 * @check: The parameter to points to the format specifier
 * Return: The specified function, if successful
 *         NULL, if otherwise
 */

int (*f_caller(char check))(va_list)
{
	f_call call[] = {
		{'c', put_char},
		{'s', put_str},
		{'%', put_mod},
	};
	int idx = 0;

	for (; idx < 3; idx++)
		if (check == call[idx].specifier)
			return (call[idx].fxn);
}
