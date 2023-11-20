#include "main.h"

/**
 * flag_width - This function handle the width character flag.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *flag_width(const char *format, va_list ap, unsigned int *num_char)
{
	const char *ptr = format;
	int i;
	Flags types[] = {{"d", print_width_int}, {"i", print_width_int},
		{"u", print_width_uint}, {"o", print_width_oct},
		{"x", print_width_hex}, {NULL, NULL}};

	ptr++;
	if (*ptr == '\0')
	{
		*num_char = -1;
		return (ptr);
	}
	if	(*ptr == '\n')
		write(1, "%\n", 2), *num_char += 2;
	else
	{
		i = 0;
		while (types[i].type != NULL && *ptr != *types[i].type)
			i++;
		if (types[i].type != NULL)
			ptr = types[i].f(ptr, ap, num_char);
		else
			write(1, ptr - 1, 2), *num_char += 2;
	}
	return (ptr);
}
