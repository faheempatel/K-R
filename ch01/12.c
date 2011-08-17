//Exercise 1-12
//Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1 //last character was a letter
#define OUT 0 //last character was not a letter

main()
{
	int c, word, is_letter;
	
	is_letter = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (is_letter == IN) {
				is_letter = OUT;
				putchar('\n');	
			}
		}
		else {
			is_letter = IN;	
			putchar(c);
		}
	}
}
