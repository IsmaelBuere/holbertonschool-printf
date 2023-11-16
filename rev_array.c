#include "main.h"
/**
 * reverse_array - This Function reverse the content of an array.
 * @a: Is a pointer to the array.
 * @n: Is the number of elements of the array.
 *
 * Return: None.
 */
void reverse_array(char *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
