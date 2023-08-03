#include "main.h"

int _sqrt_recursion(int n);
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return x;
	}
	else
	{
		return (n, x + 1);
	}

}
