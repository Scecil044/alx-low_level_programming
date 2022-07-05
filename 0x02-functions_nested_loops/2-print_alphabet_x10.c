#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
char letra;
char retorno = '\n';
int i;
for (i = 0; i < 10 ; i++)
{
letra = 'a';
while (letra <= 'z')
{
_putchar (letra);
letra++;
}
_putchar (retorno);
}
}
