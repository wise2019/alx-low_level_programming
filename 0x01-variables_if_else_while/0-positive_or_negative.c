#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Determine if a number is positive, negetive or zero
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is postive\n",n);
	}
	else if(n == 0)
	{
	 printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negetive\n",n);
	}
	return (0);
}
