#include "main.h"
/**
*_puts_recursion-function to print string followed by a new line
*@s:input
*Return: void
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}

