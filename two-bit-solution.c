#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/*
 * bitParity2bit - returns 1 if the number of 1's in the 2-bit number is odd,
 *   else it returns 0	
 *   Examples: bitParity2bit(3) = 0, bitParity8bit(2) = 1
 *   Legal ops: & ( ) >> + 
 *   Do not use a loop!
 */
int bitParity2bit(int input)
{
	int bit1 = 0x01 & input;
	int bit2 = 0x01 & (input >> 1);
	return bit1 ^ bit2;
}

/*
 * bitSum2bit - returns count of number of 1's in a 2-bit number
 *   Examples: bitSum2bit(3) = 2, bitSum8bit(2) = 1
 *   Legal ops: & ( ) >> + 
 *   Do not use a loop!
 */
int bitSum2bit(int input)
{
	int bit1 = 0x01 & input;
	int bit2 = 0x01 & (input >> 1);
	return bit1 + bit2;
}


int main(int argc, char *argv[]) 
{

	if(argc != 3) {
		printf("Usage: %s num1 num2\n", argv[0]);
		return -1;
	}
	int parity_input = atoi(argv[1]);
	int sum_input = atoi(argv[2]);

	printf("%d, %d\n", bitParity2bit(parity_input), bitSum2bit(sum_input));
	return 0;
}
