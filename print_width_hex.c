#include "main.h"

/**
 * print_width_hex - This function handle the width character flag.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *print_width_hex(const char *format, va_list ap,
	unsigned int *num_char)
{
	const char *ptr = format;
	va_list copy;
	unsigned int number, width = 6, digits, diff, i;

	if (*(ptr - 1) == '6')
	{
		va_copy(copy, ap);
		number = va_arg(copy, unsigned int);
		digits = count_Digits(number);
	}
	else if (*(ptr - 1) == '*')
	{
		width = va_arg(ap, unsigned int);
		va_copy(copy, ap);
		number = va_arg(copy, unsigned int);
		digits = count_Digits(number);
	}
	if (digits >= width)
		print_hex(ap, num_char);
	else
	{
		diff = width - digits;
		for (i = 0; i < diff; i++)
			write(1, " ", 1), (*num_char)++;
		print_hex(ap, num_char);
	}
	return (ptr);
}
