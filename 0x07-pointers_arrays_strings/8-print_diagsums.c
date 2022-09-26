#include <stdio.h>
/**
 * print_diagsums- print sum of diagonals
 * @a: name of array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, start, end, right_sum, left_sum;
	
	start  = 0;
	right_sum = 0;
	end = 0;
	left_sum = 0;
	for (i = 0; i < size; i++)
	{
		if (i == 0)
		{
			right_sum = *(a + i);
		}
		else
		{
			start = start + size + 1;
			right_sum = right_sum + *(a + start);
		}
	}
	for ( i = 0; i < size; i++)
	{
		end = end + size -1;
		left_sum = left_sum + *(a + end);
	}
	printf("%d, %d\n", right_sum, left_sum);
}
