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
	int a, b, d, i, j;
	char *conStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	a = b + d;
	conStr = malloc(sizeof(char) * (a + 1));

	if (conStr == NULL)
	{
		free(conStr);
		return (NULL);
	}
	for (i = 0; i < b; i++)
		conStr[i] = s1[i];

	j = d;
	for (d = 0; d <= j; i++, d++)
		conStr[i] = s2[d];

	return (conStr);
}
