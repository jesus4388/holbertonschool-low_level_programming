#include <stdio.h>
/**
 * main - main
 * Return: 0
 *
 * description: alphabet
 *
 */
int main(void)

{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet = alphabet + 1;
}
char ALPHABET = 'A';
while (ALPHABET <= 'Z')
{
putchar(ALPHABET);
ALPHABET = ALPHABET + 1;
}
putchar('\n');
return (0);
}
