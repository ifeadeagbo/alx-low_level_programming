#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
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

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }

    create_array(buffer, 98);

    free(buffer);
    return (0);
}
