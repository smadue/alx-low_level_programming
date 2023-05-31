#include "main.h"

/**
  * puts2 - prints every other char of a string
  * @str: string pointer
  * Return: Success
  */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
