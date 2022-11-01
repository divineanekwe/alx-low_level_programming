#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>

/* libraries for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* libraries for write */
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
