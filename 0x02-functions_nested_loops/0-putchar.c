#include "main.h"  
/**
 * main - prints _putchar, followed by a new line
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	char day[] = "_putchar";

	int o;

	for (o = 1; 0 < 8; o++)
	{
		_putchar(day[o]);
	}
	_putchar('\n');
	return (0);
}
