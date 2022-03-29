#ifndef io
#define io
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
