#include "main.h"

/**
 * flag_short - This function handle the short character flag h.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *flag_short(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;

	ptr++;
	if (*ptr == '\0')
	{
		*num_char = -1;
		return (ptr);
	}
	else if	(*ptr == '\n')
	{
		write(1, "%\n", 2);
		*num_char += 2;
	}
	else if (*ptr == 'd' || *ptr == 'i')
		print_short_int(ap, num_char);
	else if (*ptr == 'u')
		print_uint(ap, num_char);
	else if (*ptr == 'o')
		print_oct(ap, num_char);
	else if (*ptr == 'x')
		print_hex(ap, num_char);
	else if (*ptr == 'X')
		print_hex_upper(ap, num_char);
	else if (*ptr == '+')
		ptr = flag_sum(ptr, ap, num_char);
	else
	{
		write(1, ptr - 1, 2);
		*num_char += 2;
	}
	return (ptr);
}
