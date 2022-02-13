#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string integer
 * Return: ret
 */
int _atoi(char *s)
{
	int flag = 1;
	int i = 0;
	unsigned int ret = 0;
	unsigned int bar = 1;

		for (; s[i]; i++)
			if (flag)
			{
				if (s[i] == '-')
				{
					bar = bar * -1;
				}
				if (s[i] == '+')
				{
					bar = bar * 1;
				}
				if (s[i] >= '0' && s[i] <= '9')
				{
					ret = (ret * 10) + (s[i] - '0');
					if (s[i + 1] < '0' || s[i + 1] > '9')
					{
						flag = 0;
					}
				}
			}
			else
				break;
	ret = bar * ret;
	return (ret);
}
