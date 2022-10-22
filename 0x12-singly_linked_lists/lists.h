#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct list list_t;

typedef struct list {
	char *str;
	size_t len;
	list_t *next;
} list_t;
int _putchar(char c);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif /* LISTS_H */
