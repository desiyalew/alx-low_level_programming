#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @n: size of character to contatenate
 * @f: s1
 * @y: s2
 * Return: Always 0.
 */
char *_strncpy(char *f, char *y, int n)
{
	int i = 0;

		for (i = 0; i < n && y[i] != '\0'; i++)
			f[i] = y[i];
		for ( ; i < n; i++)
			f[i] = '\0';
	return (f);
}
