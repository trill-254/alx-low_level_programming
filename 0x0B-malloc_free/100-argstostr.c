#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calc_total_len - Calculates the total length of the concatenated string
 * @ac: The number of arguments
 * @av: The array of argument strings
 *
 * Return: The total length of the concatenated string
 */
int calc_total_len(int ac, char **av)
{
int total_len = 0;
int i, current_len;

for (i = 0; i < ac; i++)
{
current_len = 0;
while (av[i][current_len])
{
current_len++;
total_len++;
}
total_len++;
}

return (total_len);
}

/**
 * copy_args - Copies arguments into the concatenated string
 * @ac: The number of arguments
 * @av: The array of argument strings
 * @concatenated: The pointer to the concatenated string
 */
void copy_args(int ac, char **av, char *concatenated)
{
int i, j, current_len;

j = 0;
for (i = 0; i < ac; i++)
{
current_len = 0;
while (av[i][current_len])
{
concatenated[j] = av[i][current_len];
current_len++;
j++;
}
concatenated[j] = '\n';
j++;
}
}

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: The array of argument strings
 *
 * Return: A pointer to a new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int total_len;
char *concatenated;

if (ac == 0 || av == NULL)
return (NULL);

total_len = calc_total_len(ac, av);

concatenated = malloc(sizeof(char) * (total_len + 1));

if (concatenated == NULL)
return (NULL);

copy_args(ac, av, concatenated);

concatenated[total_len] = '\0';

return (concatenated);
}
