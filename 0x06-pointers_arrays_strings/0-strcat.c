#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @f: s1
 * @y: s2
 * Return: Always 0.
 */
char *_strcat(char *f, char *y)
{

	int i = 0, c = 0, n = 0;

	while (f[i] != '\0')
	{
		i++;
	}
	while (y[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		f[i] = y[n];
		n++;
		i++;
	}
	return (f);
}
