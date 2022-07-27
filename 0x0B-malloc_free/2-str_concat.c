#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, i, j;
	char *conStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	a = b + c;
	conStr = malloc(sizeof(char) * (a + 1));

	if (conStr == NULL)
	{
		free(conStr);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		conStr[i] = s1[i];

	j = c;
	for (c = 0; c <= j; i++, c++)
		conStr[i] = s2[c];

	return (conStr);
}
