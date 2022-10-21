#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

typedef struct list list_t;

typedef struct list {
	char *str;
	size_t len;
	list_t *next;
} list_t;
size_t print_list(const list_t *h);

#endif /* LISTS_H */
