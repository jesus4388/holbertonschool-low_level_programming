#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main
 * Return: 0
 *
 * description: positive or negative
 *
 */
int positive_or_negative(int n)
{
	
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (n);
}
