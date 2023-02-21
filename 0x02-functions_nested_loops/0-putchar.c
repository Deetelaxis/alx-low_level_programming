#include "main.h"
/**
 * main - prints _Putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mno[] = "_putchar";

	int p;

	for (p = 0; p < 8; p++)
	{
		_putchar(mno[p]);
	}
	_putchar('\n');
	return (0);
}
