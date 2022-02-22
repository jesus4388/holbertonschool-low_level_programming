#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a] != '\0')
	{
		while (needle[b] != '\0')
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
