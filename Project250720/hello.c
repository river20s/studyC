#include <stdio.h>
// #define EOF (-1)
/* copy input to output, 2nd version */
main()
{
	int c;
	printf("EOF is %d\n", EOF); // This will print the value of EOF, which is typically -1
	
	while (c = getchar() != EOF) // Note: This line has a bug, it should be `(c = getchar()) != EOF` 
	{
		putchar(c);
		// c = getchar(); 
	}
}