#include "main.h"

/**
 * printf_char - prints a char.
 * @list: arguments.
 * Return: 1.
 */
int printf_char(va_list list)
{
	char s;

	s = va_arg(list, int);
	_putchar(s);
	return (1);
}
