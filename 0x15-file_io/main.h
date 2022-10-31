#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define POSIX 1
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* end MAIN_H */
