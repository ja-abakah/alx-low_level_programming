#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

int count_words(char *str);
char **allocate_memory(int num_words);
void free_words(char **words, int num_words);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
char **words;
int num_words, i, j, k, len;

if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);
if (num_words == 0)
return (NULL);

words = allocate_memory(num_words + 1);
if (words == NULL)
return (NULL);

for (i = 0, k = 0; i < num_words; i++)
{
while (*str == ' ')
str++;
len = 0;
while (str[len] != ' ' && str[len] != '\0')
len++;

words[k] = malloc(sizeof(char) * (len + 1));
if (words[k] == NULL)
{
free_words(words, k);
return (NULL);
}

for (j = 0; j < len; j++)
words[k][j] = *str++;

words[k][j] = '\0';
k++;
}
words[k] = NULL;

return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (*str != ' ' && !in_word)
{
in_word = 1;
count++;
}
else if (*str == ' ' && in_word)
{
in_word = 0;
}
str++;
}

return (count);
}

/**
 * allocate_memory - Allocates memory for an array of strings.
 * @num_words: Number of words.
 *
 * Return: Pointer to the allocated memory.
 */
char **allocate_memory(int num_words)
{
char **words;

words = malloc(sizeof(char *) * num_words);
if (words == NULL)
return (NULL);

return (words);
}

/**
 * free_words - Frees memory used for an array of strings.
 * @words: The array of strings.
 * @num_words: Number of words.
 */
void free_words(char **words, int num_words)
{
int i;

for (i = 0; i < num_words; i++)
free(words[i]);

free(words);
}
