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
char *buff;
int ab;
size_t file, check;

if (!filename || !letters)
return (0);

buff = malloc(letters);
if (!buff)
return (0);

ab = open(filename, O_RDONLY);
if (ab == -1)
{
free(buff);
return (0);
}

file = read(ab, buff, letters);
if (file < 1)
{
free(buff);
close(ab);
return (0);
}

check = write(STDOUT_FILENO, buff, file);

free(buff);
close(ab);

if (!check || check != file)
return (0);

return (file);
}
