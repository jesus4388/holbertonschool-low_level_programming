#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
int ALPHABET;
int alphabet;

for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
{
putchar(ALPHABET);
}
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
