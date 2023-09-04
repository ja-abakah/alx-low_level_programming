#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Entry of program
 * Description: Reads a text file and prints it to the POSIX standard output.
 * @filename: file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int f, b_read, b_written;
char *b;

if (filename == NULL)
return (0);

f = open(filename, O_RDONLY);
if (f == -1)
return (0);

b = malloc(sizeof(char) * letters);
if (b == NULL)
{
close(f);
return (0);
}

b_read = read(f, b, letters);
if (b_read == -1)
{
free(b);
close(f);
return (0);
}

b_written = write(STDOUT_FILENO, b, b_read);
if (b_written == -1 || b_written != b_read)
{
free(b);
close(f);
return (0);
}

free(b);
close(f);
return (b_written);
}
