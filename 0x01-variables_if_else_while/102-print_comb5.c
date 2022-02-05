#include <stdio.h>

/**
 * main - main
 * Return: 0
 *
 * description: comb5
 */

int main(void)

{
int a1;
int a;
int b1;
int b;

for (a1 = 48; a1 < 58; a1++)
{
for (a = 48; a < 58; a++)
{
b = a + 1;
b1 = a1;
for (; b1 < 58; b1++)
{
for (; b < 58; b++)
{
putchar(a1);
putchar(a);
putchar(' ');
putchar(b1);
putchar(b);
if (a1 != 57 || b1 != 57 || a != 56 || b != 57)
{
putchar(',');
putchar(' ');
}
}
b = 48;
}
}
}
putchar('\n');
return (0);
}
