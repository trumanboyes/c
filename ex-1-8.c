#include <stdio.h>

/* count blanks, tabs, and newlines */

main()
{
	int c, newlines, blanks, tabs;
	
	newlines = 0;
	blanks = 0;
	tabs = 0;
	while ((c = getchar()) != EOF) {
	
	if (c == '\n')
		++newlines;
	
	if (c == '\t')
		++tabs;
	
	if (c == ' ')
		++blanks;
}
	
	printf("Newlines: %d\n", newlines);
	printf("Tabs: %d\n", tabs);
	printf("Blanks: %d\n", blanks);
}