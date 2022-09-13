#include "main.h"
/**
 * main - print alphabet
 *
 * Return: 0 
 */

void print_alphabet(void);
{
	char letter = 'a';
	for (letter <= 'z')
	{ 
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
