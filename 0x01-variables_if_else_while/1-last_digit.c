#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main
 * Return: 0
 *
 * description: The last digit
 *
 */
int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit > 5 && lastdigit != 0)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
if (lastdigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
if (lastdigit < 6 && lastdigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
return (0);
}
