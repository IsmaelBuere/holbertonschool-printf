#include "main.h"

/**
 * flag_sum - This function handle the + flag.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *flag_sum(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;
	va_list copy;
	int number;

	va_copy(copy, ap);
	number = va_arg(copy, int);
	if (number >= 0)
	{
		write(1, "+", 1);
		(*num_char)++;
	}
	ptr++;
	if (*ptr == '\0')
	{
		write(1, "+", 1);
		(*num_char)++;
	}
	else if (*ptr == 'd' || *ptr == 'i')
	{
		print_int(ap, num_char);
	}
	else if (*ptr == ' ')
		ptr = flag_space(ptr, ap, num_char);
	else
	{
		write(1, ptr - 1, 2);
		*num_char += 2;
	}
	return (ptr);
}
