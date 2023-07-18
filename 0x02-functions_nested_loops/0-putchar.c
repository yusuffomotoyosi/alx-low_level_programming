#include "main.h"
/**
 * main - Print "main" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char h[] = "_putchar";
	int i = 0;

	while (h[i] != '\0')
	{
		_putchar(h[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

