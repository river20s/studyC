#include <stdio.h>
// #define EOF (-1)
/* copy input to output, 2nd version */
main()
{
	int c;
	
	while (c = getchar() != EOF) // Note: This line has a bug, it should be `(c = getchar()) != EOF` 
	{
		putchar(c);
		// c = getchar(); 
	}
}