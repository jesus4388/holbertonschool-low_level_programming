#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * maim - main
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
if (lastdigit < 5)
{
printf("%d and is greater than 5\n", lastdigit);
}
else if (lastdigit > 6)
{
printf("%d and is less than 6 and not 0\n", lastdigit);
}
else
{
printf("%d and is 0\n", lastdigit);
}
return (0);
}
