#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 when successful
*/
int main(void)
{
	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
