#include "main.h"
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
char *create_buffer(const char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * BUFFER_SIZE);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - Close a file descriptor and handle errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
int result = close(fd);

if (result == -1)
{
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
int main(int argc, char *argv[])
{
if (argc != 3)
error_and_exit(97, "Usage: cp file_from file_to");
int fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_and_exit(98, "Error: Can't read from file");
int fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
error_and_exit(99, "Error: Can't write to file");
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
error_and_exit(99, "Error: Can't write to file");
}
if (bytes_read == -1)
error_and_exit(98, "Error: Can't read from file");
close(fd_from);
close(fd_to);
return (0);
}
