#include "main.h"

/**
 * print_alphabet - print all alphabet in a lowercase followed by a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
