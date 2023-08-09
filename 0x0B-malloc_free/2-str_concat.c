#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	unsigned int x, y, z, band;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++);

	for (y = 0; s2[y] != '\0'; y++);

	strcat = malloc(sizeof(char) * (x + y + 1));

	if (strcat == NULL)
	{
		free(strcat);
		return (NULL);
	}

	for (z = 0; z < x; z++)
		strcat[z] = s1[z];

	band = y;
	for (y = 0; y <= band; z++, y++)
		strcat[z] = s2[y];

	return (strcat);
}
