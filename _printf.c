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
	print_type types[] = {{"c", print_char}, {"s", print_string}, {NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			i = 0;
			while (types[i].type != NULL)
			{
				if (*format == *types[i].type)
				{
					types[i].f(arguments, &num_char);
					break;
				} i++;
			}
			if (*format == '%')
				write(1, format, 1), num_char++;
			if (*format != 'c' && *format != 's' && *format != '%')
				write(1, format - 1, 2), num_char += 2;

		}
		else
		{
			write(1, format, 1), num_char++;
		}
		format++;
	}
	va_end(arguments);
	return (num_char);
}
