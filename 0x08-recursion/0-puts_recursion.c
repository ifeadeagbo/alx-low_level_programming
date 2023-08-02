#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != '\0'){
		_putchar(*s);
		recursive_puts(s + 1);
	}
}

int main()
{
	char str[] = "Print recursion";
	recursive_puts(str);
	_putchar('\n');
	return 0;
}
