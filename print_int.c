#include "main.h"

/**
 * print_short_int - This function prints a short integer number.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_short_int(va_list ap, unsigned int *num_char)
{
	short int number = va_arg(ap, int);
	int num_of_digits, i = 0, aux = 0;
	char str[20];

	if (number == 0)
	{
		write(1, "0", 1);
		(*num_char)++;
		return;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		(*num_char)++;
		if (number == SHRT_MIN)
		{
			number = -(number + 1);
			aux = 1;
		}
		else
			number = -number;
	}
	while (number > 0)
	{
		if (aux == 1)
		{
			str[0] = 8 + '0';
			aux = 0;
		}
		else
			str[i] = number % 10 + '0';
		number /= 10;
		i++;
	}
	num_of_digits = i;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}

/**
 * print_long_int - This function prints a long integer number.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_long_int(va_list ap, unsigned int *num_char)
{
	long int number = va_arg(ap, long int), num_of_digits, i = 0, aux = 0;
	char str[25];

	if (number == 0)
	{
		write(1, "0", 1);
		(*num_char)++;
		return;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		(*num_char)++;
		if (number == LONG_MIN)
		{
			number = -(number + 1);
			aux = 1;
		}
		else
			number = -number;
	}
	while (number > 0)
	{
		if (aux == 1)
		{
			str[0] = 8 + '0';
			aux = 0;
		}
		else
			str[i] = number % 10 + '0';
		number /= 10;
		i++;
	}
	num_of_digits = i;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}

/**
 * print_int - This function prints an integer number.
 * @ap: It's the argument pointer.
 * @num_char: It's a counter of the printed characters.
 *
 * Return: None.
 */
void print_int(va_list ap, unsigned int *num_char)
{
	int number = va_arg(ap, int), num_of_digits, i = 0, aux = 0;
	char str[20];

	if (number == 0)
	{
		write(1, "0", 1);
		(*num_char)++;
		return;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		(*num_char)++;
		if (number == INT_MIN)
		{
			number = -(number + 1);
			aux = 1;
		}
		else
			number = -number;
	}
	while (number > 0)
	{
		if (aux == 1)
		{
			str[0] = 8 + '0';
			aux = 0;
		}
		else
			str[i] = number % 10 + '0';
		number /= 10;
		i++;
	}
	num_of_digits = i;
	reverse_array(str, num_of_digits);
	write(1, str, num_of_digits);
	*num_char += num_of_digits;
}
