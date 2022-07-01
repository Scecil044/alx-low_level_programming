#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Return: 0 when succesful
*/
int main(void)
{
char minusculas = 'a';
char mayusculas = 'A';
char retorno = '\n';
while (minusculas <= 'z')
{
putchar (minusculas);
minusculas++;
}

while (mayusculas <= 'Z')
{
putchar (mayusculas);
mayusculas++;
}
putchar (retorno);
return (0);
}
