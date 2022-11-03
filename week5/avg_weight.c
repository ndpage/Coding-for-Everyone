/**
 * Author: Nathan Page
 * Date: 2 November 2022
 * File: avg_weight.c
 * Description: calculate and print the average value of Northern Seal body weight
 */

// include necessary libraries
#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
	// declare variables for use in program
	double avg = 0.0;
	double data[100] = {0};
	int size = 1;
	
	// declare file handle and open data.txt file
	FILE* file_ptr = fopen("data.txt","r");

	// read file
	data[0] = (double)getc(file_ptr);

	printf("%lf\n",data[0]);

	fclose(file_ptr);

	return 0;
}
