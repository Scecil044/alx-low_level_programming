#include "main.h"
/**
 * main - start of code
 *
 * Return: always zero
*/
int main(void)
{
char sync[] = "sync";
int i;
for (i = 0; sync[i] != '\0'; i++)
{
_putchar(sync[i]);
}
_putchar('\n');
return (0);
}
