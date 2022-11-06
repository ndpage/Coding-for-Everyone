/**
 * Author: Nathan Page
 * Date: 3 November 2022
 * File: avg_weight.c
 * Description: calculate the average of data read from a text file
 */

// include necessary libraries
#include<stdio.h>
#include<stdlib.h>

// main function declaration is the entry point of the program
int main(void)
{ 
	// show program header
	printf("\n");
	printf("---------------------\n");
	printf("-- Compute Average --\n");
	printf("---------------------\n");
	printf("\n");

	// declare variables for use in program
	double average = 0.0;
	int data[5000];
	int size = 0;
	char* filename = "data.txt";

	// declare file handle and open data.txt file
	printf("Reading file %s\n",filename);
	FILE* file_ptr = fopen(filename,"r");

	// error handling for file open
	if(file_ptr == NULL){ //if file_ptr is NULL then file could not be opened
		printf("ERROR: Could not open file %s!\n",filename);
		exit(1); // exit the program with code 1
	}

	// read file contents
	int number;
	printf("Reading data from file...\n"); // prompt user on current state of program
	while (fscanf(file_ptr, "%d ", &number) == 1) { // read file until return value of fscanf() is not 1
		data[size] = number; // store number into data array
		size++;
	}
	printf("Number of data points: %d\n\n", size);
	// compute average of data points
	int j = 0; // declare temp variable to be used in summation
	for (j=0; j < size; j++){
		average += data[j]; // compute sum of data points and store in variable average
	}
	average = average/size; // compute average = sum of data/total number of points
	printf("Average weight: %lf\n", average);
	printf("                ----------\n");
	//close file handle
	printf("Closing file %s\n",filename);
	fclose(file_ptr);

	// print closing message
	int i = 0;
	for(i=0; i < 3; i++){
		printf(">");
	}
	printf(" Done!\n");

	return 0; //exit the program
}
