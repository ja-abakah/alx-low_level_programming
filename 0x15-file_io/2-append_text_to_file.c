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
int f, b_writes, t_lenght = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (t_lenght = 0; text_content[t_lenght];)
t_lenght++;
}

f = open(filename, O_WRONLY | O_APPEND);
b_writes = write(f, text_content, t_lenght);

if (f == -1 || b_writes == -1)
return (-1);
close(f);

return (1);
}

