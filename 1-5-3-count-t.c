#include <stdio.h>

/* count lines in input */

main()
{
	int c, t;
	
	t = 0;
	while ((c = getchar()) != EOF)
		if (c == 't')
			++t;
	printf("%d\n", t);
}