#include "main.h"

/**
 * flag_space - This function handle the space character flag.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *flag_space(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;
	va_list copy;
	int number;

	va_copy(copy, ap);
	number = va_arg(copy, int);
	if (*(ptr + 1) == '\0')
	{
		*num_char = -1;
		return (ptr);
	}
	if (number >= 0 && *(ptr - 1) != '+' && *(ptr + 1) != '%')
	{
		write(1, " ", 1);
		(*num_char)++;
	}
	ptr++;
	if (*ptr == '%')
	{
		write(1, "%", 1);
		(*num_char)++;
	}
	else if (*ptr == 'd' || *ptr == 'i')
	{
		print_int(ap, num_char);
	}
	else if (*ptr == '+')
		ptr = flag_sum(ptr, ap, num_char);
	else
	{
		write(1, ptr - 1, 2);
		*num_char += 2;
	}
	return (ptr);
}
