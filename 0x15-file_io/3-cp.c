#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * error_exit - Print an error message to stderr and exit with a status code.
 * @exit_code: The exit status code.
 * @format: The error message format string.
 * @...: Additional arguments for the error message.
 */
void error_exit(int exit_code, const char *format, ...)
{
va_list args;
va_start(args, format);
fprintf(stderr, "Error: ");
vfprintf(stderr, format, args);
fprintf(stderr, "\n");
va_end(args);
exit(exit_code);
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
const char *file_from;
const char *file_to;
int fd_from, fd_to;
char buffer[BUF_SIZE];
ssize_t nread, nwrite;

if (argc != 3)
error_exit(97, "Usage: cp file_from file_to");

file_from = argv[1];
file_to = argv[2];

/*Open the source file for reading*/
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
error_exit(98, "Can't read from file %s", file_from);

/*Open or create the destination file for writing*/
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
error_exit(99, "Can't write to file %s", file_to);

/*Copy data from file_from to file_to in chunks*/
while ((nread = read(fd_from, buffer, BUF_SIZE)) > 0)
{
nwrite = write(fd_to, buffer, nread);
if (nwrite == -1)
error_exit(99, "Can't write to file %s", file_to);
if (nwrite != nread)
error_exit(99, "Write error while copying %s to %s", file_from, file_to);
}

/*Close file descriptors*/
if (close(fd_from) == -1)
error_exit(100, "Can't close fd %d", fd_from);
if (close(fd_to) == -1)
error_exit(100, "Can't close fd %d", fd_to);

return (0);
}
