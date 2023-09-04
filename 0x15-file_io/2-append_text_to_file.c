#include "main.h"
#include <unistd.h>

/**
 * append_text_to_file - Entry of program 
 * Description: Appends text at the end of a file.
 * @filename: file to append to.
 * @text_content: The content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, b_written, t_length = 0;

if (filename == NULL)
return (-1);

f = open(filename, O_WRONLY | O_APPEND);
if (f == -1)
return (-1);

if (t_content != NULL)
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
