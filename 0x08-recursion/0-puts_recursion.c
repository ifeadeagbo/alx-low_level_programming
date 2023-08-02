#include "main.h"

void _puts_recursion (char *s){

	if (*p == '\0'){
		_putchar("\n");
		return;
	}
	_putchar(*p);
	_puts_recursion(p + 1);
}
