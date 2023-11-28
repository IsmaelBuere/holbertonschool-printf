#include "main.h"
/**
 * count_Digits - Counts the number of digits of an unsigned integer number.
 * @num: It is the integer whose number of digits is calculated.
 *
 * Return: Returns the variable count which is the number of digits.
 */
unsigned int count_Digits(unsigned int num)
{
	unsigned int count = 0;

	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}
