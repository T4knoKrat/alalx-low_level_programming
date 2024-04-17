#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sm1, sm2, y;

	sm1 = 0;
	sm2 = 0;

	for (y = 0; y < size; y++)
	{
		sm1 = sm1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sm2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sm1, sm2);
}
