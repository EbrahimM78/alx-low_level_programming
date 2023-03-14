#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new copy of a string
 * @str: given string to be copied
 *
 * Return: pointer to string if success, or Null if failed
 */

char *_strdup(char *str)
{
char *duplicate;
int index, len = 0;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;

duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (index = 0; str[index]; index++)
duplicate[index] = str[index];

duplicate[len] = '\0';

return (duplicate);
}
