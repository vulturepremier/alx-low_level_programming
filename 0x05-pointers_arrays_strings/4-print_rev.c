#include "main.h"
/**
 * rev_string - Function to print the string in reverse;
 * @s: this is the string;
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	char i;

	for ( i = '\0'; s[i] >= s[0]; i--)
	{
	_putchar('s[i]');
	}
	putchar('\n');
}
