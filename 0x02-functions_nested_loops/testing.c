#include <stdio.h>
#include "main.h"

int main(void)
{
	print_alphabet();
	printf("\n");
	return (0);
}

void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
		printf("%c", i);
}