#include "main.h"

int compare_char(char *p, int a, int j)
{
	if (*(p + a) != *(p + j - 1))
		return (0);
	else if (a >= j)
		return (1);
	else
		return (compare_char(p, a + 1, j - 1);
}

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (compare_char(s, 0, _strlen_recursion(s)));
}

