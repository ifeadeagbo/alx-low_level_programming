#include "main.h"

int main_sqrt_recursion(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	else if ( j * j == i)
	{
		return (j);
	}
	else
	{
		return (main_sqrt_recursion(i, j + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}
