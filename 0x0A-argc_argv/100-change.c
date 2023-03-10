#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - takes in an integer number of cents
 *- outputs the lowest number of coin divisions to be made to get that
 * @argc: holds the number of arguments
 * @argv: holds all the arguments provided
 *
 * Return: 0 (success), 1 (failure)
 */

int main(int argc, char *argv[])
{
int coinsum, cents;

coinsum = 0;

if (argc == 2)
{
if ((int)strspn(argv[1], "-") == 1)
{
printf("0\n");
return (0);
}
else if (strlen(argv[1]) == strspn(argv[1], "0123456789"))
{
cents = atoi(argv[1]);
coinsum += cents / 25;
cents %= 25;
coinsum += cents / 10;
cents %= 10;
coinsum += cents / 5;
cents %= 5;
coinsum += cents / 2;
cents %= 2;
coinsum += cents / 1;
cents %= 1;

printf("%d\n", coinsum);
return (0);
}
}
printf("Error\n");
return (1);
}
