/*
Write a program to find the factorial of given number using command line 
argument. 
*/
// C program to find factorial of a number
// using command line arguments

#include <stdio.h>
#include <stdlib.h> /* atoi */

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}

// Driver code
int main(int argc, char* argv[])
{

	int num, res = 0;

	// Check if the length of args array is 1
	if (argc == 1)
		printf("No command line arguments found.\n");

	else {

		// Get the command line argument and
		// Convert it from string type to integer type
		// using function "atoi( argument)"
		num = atoi(argv[1]);

		// Find the factorial
		printf("%d\n", factorial(num));
	}
	return 0;
}

