#include "main.h"

/**
 * _printf - This function produces output according to a format.
 * @format: It's a pointer to a character string.
 *
 * Description: The output that this function produces is given by the format
 * character string. The format string is composed of zero or more directives.
 * It handles the following conversion specifiers: c, s, and %.
 *
 * Return: An integer number representing the number of characters printed
 * (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int i, num_char = 0;
	print_type types[] = {{"c", print_char}, {"s", print_string},
		{"d", print_int}, {"i", print_int}, {"b", print_bin},
		{"u", print_uint}, {"o", print_oct}, {"x", print_hex},
		{"X", print_hex_upper}, {NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == '%')
				write(1, format, 1), num_char++;
			else
			{
				i = 0;
				while (types[i].type != NULL && *format != *types[i].type)
					i++;
				if (types[i].type != NULL)
					types[i].f(arguments, &num_char);
				else
					write(1, format - 1, 2), num_char += 2;
			}

		}
		else
			write(1, format, 1), num_char++;
		format++;
	}
	va_end(arguments);
	return (num_char);
}
