#include "main.h"

char *_strdup(char *str)
{
	char *strup;
	unsigned int a, b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++);

	strup = (char *)malloc(sizeof(char) * (a + 1));

	if (strup == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= i; b++)
		strup[b] = str[b];

	return (strup);
}
