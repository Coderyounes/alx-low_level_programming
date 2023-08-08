#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_source_file(const char *filename);
int open_dest_file(const char *filename);
int copy_file(int src_fd, int dest_fd);

#endif /* MAIN_H */
