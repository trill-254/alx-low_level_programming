#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str)
{
if (*str == ' ')
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
}

return (count);
}

/**
 * allocate_words - Allocates memory for an array of words
 * @str: The input string
 * @words: The number of words in the string
 *
 * Return: A pointer to an array of words or NULL on failure
 */
char **allocate_words(char *str, int words)
{
char **result;
int i, j, k;

result = malloc(sizeof(char *) * (words + 1));

if (result == NULL)
return (NULL);

for (i = 0; i < words; i++)
{
while (*str == ' ')
str++;

k = 0;
while (str[k] != ' ' && str[k] != '\0')
k++;

result[i] = malloc(sizeof(char) * (k + 1));

if (result[i] == NULL)
{
for (j = 0; j < i; j++)
free(result[j]);
free(result);
return (NULL);
}

for (j = 0; j < k; j++)
result[i][j] = str[j];

result[i][k] = '\0';

str += k;
}

result[i] = NULL;

return (result);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
int words;
char **result;

if (str == NULL || *str == '\0')
return (NULL);

words = count_words(str);

result = allocate_words(str, words);

return (result);
}
