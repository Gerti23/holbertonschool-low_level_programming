#include "function_pointers.h"
/**
 * int_index - functin that searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function to compare values
 * Return: the index of the first element for which the cmp function
 * does not return 0, if no element matches return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		k = 0;
		while (k < size)
		{
			if (cmp(array[k]) > 0)
			{
				return (k);
			}
			k++;
		}
	}
	return (-1);
}
