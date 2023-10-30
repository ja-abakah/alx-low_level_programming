#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* create_buffer - Allocate memory for a buffer.
* @file: The name of the file.
*
* Return: A pointer to the allocated buffer.
*/
char *create_buffer(const char *file) {
char *buffer = malloc(BUFFER_SIZE * sizeof(char));
if (buffer == NULL) {
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return buffer;
}

/**
* close_file - Close a file descriptor and handle errors.
* @fd: The file descriptor to close.
*/
void close_file(int fd) {
if (close(fd) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
* main - Copy the contents of one file to another.
* @argc: The number of command-line arguments.
* @argv: An array of command-line arguments.
*
* Return: 0 on success, or appropriate error codes.
*/
int main(int argc, char *argv[]) {
if (argc != 3) {
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

int fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

int fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}

char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}

if (bytes_read == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

close_file(fd_from);
close_file(fd_to);
return 0;
}
