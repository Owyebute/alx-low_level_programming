#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - Main Block
 * Description: prints all single digits of base 10
 * starting from 0, followed by a new line
 * Returns: 0
 */
int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--);
		putchar(c);
		
	putchar('\n');
	return (0);
}

