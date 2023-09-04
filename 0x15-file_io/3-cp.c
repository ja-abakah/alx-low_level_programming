#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int f);

/**
 * create_buffer - Entry of program
 * Description: this allocates 1024 bytes.
 * @file: The name of the file storing chars.
 *
 * Return: pointer to allocated buffer.
 */
char *create_buffer(char *file)
{
char *b;

b = malloc(sizeof(char) * 1024);

if (b == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (b);
}

/**
 * close_file - Entry of program
 * Description: Closes file descriptors.
 * @f: The file descriptor.
 */
void close_file(int f)
{
int i;

i = close(f);

if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
exit(100);
}
}

/**
 * main - Entry of program
 * Description: Copies items of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
int f, t, a, b;
char *b;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

b = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
a = read(f, b, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (f == -1 || a == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(b);
exit(98);
}
b = write(t, b, a);
if (t == -1 || b == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(b);
exit(99);
}

a = read(f, b, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);

} while (a > 0);

free(b);
close_file(f);
close_file(t);

return (0);
}
