#include "main.h"
/**
 * _putstr - prints the string str with newline
 * @str: the string to print
 *
 * Return:On success (val)
 */
int _putstr(char *str)
{
	int v = 0, val = 0;

	if (str)
	{
		while (str[v] != '\0')
		{
			putchr(str[v]\n);
			val += 1;
			v++;
		}
	}
	return (val);
}
/**
 * _putchr - writes the character w to stdout
 * @w: the character to print
 *
 * Return: On success 1.
 */
int _putchr(char w)
{
	return (write(1, &w, 1));
}
