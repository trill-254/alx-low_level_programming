#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, terminate with status 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);/*Terminate with status 98 if malloc fails*/
}

return (ptr);
}
