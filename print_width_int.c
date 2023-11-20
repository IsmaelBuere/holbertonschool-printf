#include "main.h"

/**
 * countDigits - Counts the number of digits of an integer number.
 * @num: It is the integer whose number of digits is calculated.
 *
 * Return: Returns the variable count which is the number of digits.
 */
int countDigits(int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
		if (num == INT_MIN)
			return (11);
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/**
 * print_width_int - This function handle the width character flag.
 * @format: It's a pointer to a character string.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
const char *print_width_int(const char *format, va_list ap,
		unsigned int *num_char)
{
	const char *ptr = format;
	va_list copy;
	int number, width = 6, digits, diff, i;

	if (*(ptr - 1) == '6')
	{
		va_copy(copy, ap);
		number = va_arg(copy, int);
		digits = countDigits(number);
	}
	else if (*(ptr - 1) == '*')
	{
		width = va_arg(ap, int);
		va_copy(copy, ap);
		number = va_arg(copy, int);
		digits = countDigits(number);
	}
	if (digits >= width)
		print_int(ap, num_char);
	else
	{
		diff = width - digits;
		for (i = 0; i < diff; i++)
			write(1, " ", 1), (*num_char)++;
		print_int(ap, num_char);
	}
	return (ptr);
}

