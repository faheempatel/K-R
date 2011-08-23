// Exercise 1-14
// Write a program to print a histogram of the frequencies
// of different characters in it's input.

#include <stdio.h>

main()
{
	int c, i, x;
	int letters[26]; 
	int numbers[10];

	for (i = 0; i < 26; ++i)
		letters[i] = 0;	

	for (i = 0; i < 10; ++i)
		numbers[i] = 0;
	
	while ((c = getchar()) != EOF){
		if (c >= 'a' && c <= 'z')
			++letters[c - 'a']; // (c = 'b' == 98) - (97('a')) = 1
		else if (c >= 'A' && c <= 'Z')
			++letters[c - 'A'];
		else if (c >= '0' && c <= '9')
			++numbers[c - '0'];
	}

	for (i = 0; i < 26; ++i){
		printf("%c: ", 'A' + i);

		for (x = 0; x < letters[i]; ++x)
			printf("|");
		
		printf("\n");
	}
	
	printf("\n");

	for (i = 0; i < 10; ++i){
		printf("%c: ", '0' + i);
		
		for (x = 0; x < numbers[i]; ++x)
			printf("|");
		
		printf("\n");
	}
}
