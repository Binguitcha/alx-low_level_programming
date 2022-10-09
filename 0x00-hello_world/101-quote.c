#include <stdio.h>

/**
 * main - Prints text
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int i;
	char tab[58] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0 ; i < 58 ; i++)
	{
		putchar(tab[i]);
	}
	putchar('\n');
return (1);
}
