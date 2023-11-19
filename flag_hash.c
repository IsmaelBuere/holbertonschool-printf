#include "main.h"

/**
 * flag_hash - This function handle the hash character flag.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *flag_hash(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;
	va_list copy;
	int number;

	va_copy(copy, ap);
	number = va_arg(copy, int);
	ptr++;
	if (*ptr == '\0')
		write(1, " ", 1), (*num_char)++;
	else if (*ptr == 'o')
	{
		if (number != 0)
			write(1, "0", 1), (*num_char)++;
		print_oct(ap, num_char);
	}
	else if (*ptr == 'x')
	{
		if (number != 0)
			write(1, "0x", 2), *num_char += 2;
		print_hex(ap, num_char);
	}
	else if (*ptr == 'X')
	{
		if (number != 0)
			write(1, "0X", 2), *num_char += 2;
		print_hex_upper(ap, num_char);
	}
	else
		write(1, ptr - 1, 2), *num_char += 2;
	return (ptr);
}
