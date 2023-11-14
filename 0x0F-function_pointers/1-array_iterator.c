#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Iterates an array and executes a function given as a parameter
 * @array: The array to iterate
 * @size: The size of the array
 * @action: A pointer to the function to be used on each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

/**
 * print_element - Prints an integer
 * @element: The integer to be printed
 */
void print_element(int element)
{
	printf("%d\n", element);
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {0, 1, 2, 3, 4};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	array_iterator(arr, size, print_element);

	return 0;
}
