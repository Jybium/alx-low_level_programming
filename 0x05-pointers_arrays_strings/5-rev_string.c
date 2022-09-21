#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void rev_string(char *s)
{
	int i, l, len = 0;

	char c;

	while (s[len])
	{
		len++;
		l = len - 1;
	}
	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[l];
		s[l] = c;
		l--;
	}
}
