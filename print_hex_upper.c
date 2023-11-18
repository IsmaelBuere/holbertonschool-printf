#include "main.h"

/**
 * print_hex_upper - This function prints an unsigned integer number converted
 * to hexadecimal using uppercase.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_hex_upper(va_list ap, unsigned int *num_char)
{
	unsigned int number = va_arg(ap, unsigned int);
	unsigned int num_of_digits, i = 0, rest;
	char str[20];

	while (number >= 16)
	{
		rest = number % 16;
		if (rest < 10)
			str[i] = rest + '0';
		else
			str[i] = rest + 55;
		number /= 16;
		i++;
	}
	str[i] = number + '0';
	num_of_digits = i + 1;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}
