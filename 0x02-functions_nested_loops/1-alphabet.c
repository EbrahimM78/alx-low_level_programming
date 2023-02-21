#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
