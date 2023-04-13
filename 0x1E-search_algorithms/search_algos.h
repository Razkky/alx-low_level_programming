#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_recursion(int *array, size_t left, size_t right, int value);
int binary_search(int *array, size_t size, int value);
#endif /* END SEARCH_H */
