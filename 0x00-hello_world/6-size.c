#include <stdio.h>
/**
 * main - main
 * Return: 0
 *
 * descripcion: mi primer proyecto en c
 *
 */
int main(void)
{
char tipochar;
int ent;
long int lint;
long long llint;
float fl;

printf("Size of a char: %lu byte(s)\n", (sizeof(char)));
printf("Size of an int: %lu byte(s)\n", (sizeof(int)));
printf("Size of a long int: %lu byte(s)\n", (sizeof(lint)));
printf("Size of a long long int: %lu byte(s)\n", (sizeof(llint)));
printf("Size of a float: %lu byte(s)\n", (sizeof(fl)));
return (0);
}
