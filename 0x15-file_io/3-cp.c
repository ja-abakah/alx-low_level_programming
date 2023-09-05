#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * error_and_exit - Entry of program
 * Description: Print error message and exit with a specific error code.
 * @err_code: The error code to exit with.
 * @message: The error message to print.
 */
void error_and_exit(int err_code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(err_code);
}

/**
 * open_source_file - Entry of program
 * Description: Open the source file for reading.
 * @file_from: The name of the source file.
 *
 * Return: The file descriptor of the source file, or -1 on error.
 */
int open_source_file(const char *file_from)
{
int fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
error_and_exit(98, "Error: Can't read from file");
}
return (fd_from);
}

/**
 * open_destination_file - Entry of program
 * Description: Open the destination file for writing.
 * @file_to: The name of the destination file.
 *
 * Return: The file descriptor of the destination file, or -1 on error.
 */
int open_destination_file(const char *file_to)
{
int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
error_and_exit(99, "Error: Can't write to file");
}
return (fd_to);
}

/**
 * copy_file_contents - Entry of program
 * Description: Copy the contents of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void copy_file_contents(int fd_from, int fd_to)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
error_and_exit(99, "Error: Can't write to file");
}
}

if (bytes_read == -1)
{
error_and_exit(98, "Error reading from file");
}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
error_and_exit(97, "Usage: cp file_from file_to");
}

const char *file_from = argv[1];
const char *file_to = argv[2];

int fd_from = open_source_file(file_from);
int fd_to = open_destination_file(file_to);

copy_file_contents(fd_from, fd_to);

if (close(fd_from) == -1)
{
error_and_exit(100, "Error: Can't close source file descriptor");
}

if (close(fd_to) == -1)
{
error_and_exit(100, "Error: Can't close destination file descriptor");
}

return (0);
}
