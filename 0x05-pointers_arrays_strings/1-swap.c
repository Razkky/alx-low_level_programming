#include "main.h"
/**
 * swap_int - swap a and b
 * @a: integer to be swapped to b
 * @b: integer to be swapped to a
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
