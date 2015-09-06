#include <stdio.h>

/* copy input to output; 2nd version ; excercise 1-6 */

main()
{
	int c;
	
	while ((c = getchar()) != EOF)
		putchar(c);
		c = getchar();
		printf("%d", c);
}