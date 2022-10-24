/**
 * Author: Nathan Page
 * Date: 23 October 2022
 * File: sine_table.c
 * Description: print sin() and cos() function from 0 to 1 in a table
 */

// include necessary libraries
#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */

// main program entry point
int main(void)
{ 
	// declare variables for use in program
	double interval;
	int i;
	// set up table header
	printf("___________________________\n");
	printf("|   x   | sin(x) | cos(x) |\n");
	printf("---------------------------\n");
	
	// calculate values of sin() and cos()
	for(i = 0; i <= 10; i++)
	{
		 interval = i/10.0;
		 printf("| %0.3lf | %0.3lf  | %0.3lf  |\n", interval, sin(interval), cos(interval)); // print data in row of table
	}	
	printf("+++++++++++++++++++++++++++\n"); // print end of table
	return 0;
}
