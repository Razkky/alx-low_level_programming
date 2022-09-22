/**
 * reverse_array - reverse the content of an array
 * @a: name of array
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int last, first, middle, pos;

	last = n - 1;
	first = 0;
	middle = n / 2;
	while (first < middle)
	{
		pos = *(a + first);
		*(a + first) = *(a + last);
		*(a + last) = pos;
		last--;
		first++;
	}
}
