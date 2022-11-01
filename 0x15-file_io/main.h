#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

/* libraries for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* libraries for write */
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *filename);
void close_file(int fd);

#endif /* MAIN_H */
