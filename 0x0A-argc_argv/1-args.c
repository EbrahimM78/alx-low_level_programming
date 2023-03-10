#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
(void)argv;

if (argc)
{
printf("%d\n", argc - 1);
}
return (0);
}
