#include"search_algos.h"

/**
 * print_array - prints the array of ints, seperated with commas
 * @array: a pointer to the array to print
 * @first: the first index to print
 * @last: the last index to print
 * Return: the values of the list
 */

void print_array(int *array, size_t first, size_t last)
{
size_t i;

printf("Searching in array: ");
for (i = first; i <= last; i++)
{
if (i != first)
printf(", ");
printf("%d", array[i]);
}
printf("\n");
}


/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: input sorted array
 * @size: Size of the input array
 * @value: Value to search for
 * Return: The index where the value is located or
 * -1 if it doesn't exist in the array
 */

int binary_search(int *array, size_t size, int value)
{
size_t i = 0, first = 0, last = size - 1;

if (array)
{
while (first <= last)
{
print_array(array, first, last);
i = (first + last) / 2;

if (value > array[i])
first = i + 1;
else if (value < array[i])
last = i - 1;
else
return (i);
}
}

return (-1);
}
