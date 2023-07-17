#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alph[]="abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
			putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
