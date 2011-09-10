// Exercise 1-19
// Write a function reverse(s) that reverses the
// character string s. Use it to write a program
// that reverses its input a line at a time.

#include <stdio.h>

#define MAXLINE 1000 // Max input line length

int getsline(char line[], int maxline);
void reverse(char s[], int len);

// Prints the input line reversed
main()
{
	int len; // Current line length
	char line[MAXLINE]; // Current input line

	while ((len = getsline(line, MAXLINE)) > 0) {
		reverse(line, len-2); // Minus 2 so to get correct index value
		printf("%s", line);
	}

	return 0;
}

// getsline: Reads a line into s, return i
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

// reverse: Reverses input line
void reverse(char s[], int len)
{
	int i, x;
	int c; // Is used as a temporary holder	
	
	for (i = 0, x = len; i < x; ++i, --x) {
		c = s[i];
		s[i] = s[x];
		s[x] = c;
	}
}
