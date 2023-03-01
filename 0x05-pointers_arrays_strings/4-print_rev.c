#include "main.h"


#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int end;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (end = len; end > 0; end--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

