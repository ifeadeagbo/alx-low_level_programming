#include "main.h"

int main_prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 || j > 0)
		return (0);
	return (main_prime(i, j - 1));
}
int is_prime_number (int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n-1));
}
