#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free (realloc)
 * @ptr: pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: new void pointer or NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *newarr, *oldptr;

oldptr = ptr;

if (new_size == old_size)
{
return (ptr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
newarr = malloc((new_size));

if (newarr == NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
free(ptr);
return ((void *)newarr);
}
for (i = 0; i < old_size; i++)
{
newarr[i] = oldptr[i];
if (new_size == i)
break;
}
free(ptr);
return ((void *)newarr);
}