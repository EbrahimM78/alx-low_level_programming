#include "main.h"

/**
 * _strncpy - copy two strings only taking n bytes from src
 * @dest: Buffer storage of sting copy
 * @src: source string
 * @n: number of bites to use from src
 * Return: pointer to the resulting sting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_len = 0;

while (src[index++])
src_len++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = src_len; index < n; index++)
dest[index] = '\0';

return (dest);
}
