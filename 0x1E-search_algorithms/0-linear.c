#include"search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: input array
 * @size: input size (type syse_t)
 * @value: value to input
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
}
return (-1);
}
