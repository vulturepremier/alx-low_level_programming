#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print the elements of an array;
 *@a: a pointer to the first element of the array;
 *@n: the number of array elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
		printf("%d", a[i]);
		}
		else
		{
		printf(", %d", a[i]);
		}
	}
	printf("\n");

}
