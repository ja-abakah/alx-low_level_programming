#include "main.h"
#include <stdlib.h>

/**
 * create_file - Entry of program
 * Description: Creates a file and writes text content to it.
 * @filename: file to create.
 * @text_content: The text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int f, b_written, t_length = 0;

if (filename == NULL)
return (-1);

f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (f == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[t_length])
t_length++;

b_written = write(f, text_content, t_length);
if (b_written == -1 || b_written != t_length)
{
close(f);
return (-1);
}
}

close(f);
return (1);
}
