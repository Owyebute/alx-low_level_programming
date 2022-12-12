#include <stdio.h>

#include <stdlib.h>

/**
 * Main - Main block
 * Description: Get a random block and check its
 * Return: 0
 */

int main(void)

{
	char c = 'a';

	while  (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
		
