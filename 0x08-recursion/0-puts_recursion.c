#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != '\0'){
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

int main()
{
	char str[] = "Print recursion";
	_puts_recursion(str);
	_putchar('\n');
	return 0;
}
