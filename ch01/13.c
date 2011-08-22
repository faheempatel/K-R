#include <stdio.h>
#define YES 1
#define NO 0

main()
{
	int is_word = NO;
	int count = 0;
	int ndigit[10];
	int c, i, x;
	
	for (i = 0; i < 10; ++i){
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF){
		
		if (c == ' ' || c == '\n' || c == '\t'){
			if (is_word == YES){
				is_word = NO;
				++ndigit[count-1];
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

		for (x = 0; x < ndigit[i]; ++x){
			printf("|");
		}

		printf("\n");
	}
}
