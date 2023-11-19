#include "main.h"

/**
 * flag_long - This function handle the long character flag l.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *flag_long(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;

	if (*(ptr + 1) == '\0')
	{
		*num_char = -1;
		return (ptr);
	}
	ptr++;
	if (*ptr == 'd' || *ptr == 'i')
		print_long_int(ap, num_char);
	else if (*ptr == 'u')
		print_long_uint(ap, num_char);
	else if (*ptr == 'o')
		print_long_oct(ap, num_char);
	else if (*ptr == 'x')
		print_long_hex(ap, num_char);
	else if (*ptr == 'X')
		print_long_hex_upper(ap, num_char);
	else if (*ptr == '+')
		ptr = flag_sum(ptr, ap, num_char);
	else
	{
		write(1, ptr - 1, 2);
		*num_char += 2;
	}
	return (ptr);
}
