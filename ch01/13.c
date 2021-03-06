// Exercise 1-13
// Write a program to print a histogram of the lengths of
// words in its input.  

#include <stdio.h>

#define YES 1 // is a word
#define NO 0 // is not a word

main()
{
	int is_word = NO;
	int count = 0;
	int word_nums[10];
	int c, i, x;
	
	for (i = 0; i < 10; ++i){
		word_nums[i] = 0;
	}

	while ((c = getchar()) != EOF){
		
		if (c == ' ' || c == '\n' || c == '\t'){
			if (is_word == YES){
				is_word = NO;
				++word_nums[count-1];
				count = 0;
			}
				
		}
		else{
			is_word = YES;
			++count;
		}
	}

	printf("\nHistogram\n");

	for (i = 0; i < 10; ++i){
		printf("%d: ", i+1);

		for (x = 0; x < word_nums[i]; ++x){
			printf("|");
		}

		printf("\n");
	}
}
