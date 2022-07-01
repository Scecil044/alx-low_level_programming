#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 * Return: 0 when succesful
*/
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		putchar("%c\n " ch);
	}
	return (0);
}
