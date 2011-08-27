// Exercise 1-15
// Rewrite the temperature conversion program of
// Section 1.2 to use a function for conversion.

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float to_celsius(float fahrenheit)
{
	float celsius;

	celsius = (5 * (fahrenheit-32)) / 9;

	return celsius;
}

main()
{
	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, to_celsius(fahr));

	return 0;
}
