#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
		ar[a] = c;

	return (ar);
}
