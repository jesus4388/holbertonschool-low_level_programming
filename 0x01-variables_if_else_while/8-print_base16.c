#include <stdio.h>

/**
 * main - main
 * Return: 0
 *
 * description: numbers
 *
 */

int main(void)

{

char a;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
