// Exercise 1-16
// Revise the main routine of the longest-line program so it will
// correctly print the length of arbitrary long input lines, and
// as much as possible of the text.

#include <stdio.h>

#define MAXLINE 1000 // maximum input line length

int getsline(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest input line
main()
{
	int len; // current line length
	int max; // maximum length seen so far
	char line[MAXLINE]; // current input line
	char longest[MAXLINE]; // longest line saved here

	max = 0;
	while ((len = getsline(line, MAXLINE)) > 0)
		if (len > max) { 
			max = len;
			copy(longest, line);
		}

	if (max > 0) // there was a line
		printf("Text: %sLength: %i", longest, max);

	return 0;
}

// getsline: read a line into s, return length
int getsline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) 
		s[i] = c;

	if (c == '\n') { 
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

// copy: copy 'from' into 'to'; assume 'to' is big enough
void copy(char to[], char from[])
{
	int i;
	
	i = 0;
	while ((to[i] = from [i]) != '\0') //
		++i;
}
