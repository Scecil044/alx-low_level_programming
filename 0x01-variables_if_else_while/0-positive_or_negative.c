#include<stdlib.h>
#include<time>
/**
 * main - Entry point
 *
 * Return: 0(Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
