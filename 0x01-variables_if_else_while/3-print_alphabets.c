#include <stdio.h>

/**
 * main - main
 * Return: 0
 */

int main(void)
{
int ALPHABET;
int alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
{
putchar(ALPHABET);
}
putchar('\n');
return (0);
}
