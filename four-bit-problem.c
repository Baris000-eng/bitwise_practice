#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/*
 * bitParity4bit - returns 1 if the number of 1's in the 4-bit number is odd,
 *   else it returns 0	
 *   Examples: bitParity4bit(15) = 0, bitParity4bit(7) = 1
 *   Legal ops: & ( ) >> + 
 *   Do not use a loop!
 */
int bitParity4bit(int input)
{
	int mask = ;
	int halfParity = ; 
	int mask2 = ;
	return ;
}

/*
 * bitSum4bit - returns count of number of 1's in a 4-bit number
 *   Examples: bitSum4bit(15) = 4, bitSum4bit(7) = 3
 *   Legal ops: & ( ) >> + 
 *   Do not use a loop!
 */
int bitSum4bit(int input)
{
	int mask = ;
	int halfSum = ; 
	int mask2 = ;
	return ;
}


int main(int argc, char *argv[]) 
{

	if(argc != 3) {
		printf("Usage: %s num1 num2\n", argv[0]);
		return -1;
	}
	int parity_input = atoi(argv[1]);
	int sum_input = atoi(argv[2]);

	printf("%d, %d\n", bitParity4bit(parity_input), bitSum4bit(sum_input));
	return 0;
}
