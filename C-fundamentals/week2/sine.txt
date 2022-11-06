/*	Author: Nathan Page
 *	Date: 20 October 2022
 *	Progam: sine.c
 *	Description: calculate value of sine from 0 to 1 in increments of 0.1
 */

// Include libraries needed to perform Sine calculation and output to console
#include <stdio.h>
#include <math.h>

// main program code is contained within main()
int main(void)
{
	// declare variables for input (x) and result of sine function as double and initialize to zero
	double x = 0.0;
	double result = 0.0;
	
	// get user input for x value
	printf("Enter value x (rad): ");
	scanf("%lf",&x);
	
	//coerce x value between 0 and 1
	if(x > 1)
	{
		printf("Maximum value for x is 1\n");
		x = 1.0;
	}
	if(x < 0)
	{
		printf("Minimum value for x is 0\n");
		x = 0.0;
	}
	result = sin(x); // calculate value of sine at x	
	printf("Sine(%lf) = %lf\n",x,result); // print x and result
	return 0; //exit program
}

