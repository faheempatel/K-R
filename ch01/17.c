// Exercise 1-17
// Write a program to print all input lines that are
// longer than 80 characters.

#include <stdio.h>

#define MAXLINE 1000 // maximum input line length

int getsline(char line[], int maxline);

// print lines that are > 80 characters
main()
{
	int len; // current line length
	char line[MAXLINE]; // current input line
	
	while ((len = getsline(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}

	return 0;
}

// getsline: read a line into s, return i
int getsline(char s[], int limit)
{
	int c, i;

	for (i = 0; i <= limit-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}
