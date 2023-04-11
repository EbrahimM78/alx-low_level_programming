#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, b, c;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

a = open(filename, O_RDONLY);
b = read(o, buffer, letters);
c = write(STDOUT_FILENO, buffer, r);

if (a == -1 || b == -1 || c == -1 || c != b)
{
free(buffer);
return (0);
}

free(buffer);
close(a);

return (c);
}
