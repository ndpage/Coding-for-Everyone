/**
 * @file hw.c
 * @author Nathan Page
 * @brief 
 * @version 0.1
 * @date 2023-03-20
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


// Return size of data array
int getSize(FILE* input){
  int size = 0;
  fscanf(input, "%d", &size);
  printf("Size: %d\n", size);
  return size;
}

// Read data (double) from file into an array
void readDataToArray(FILE* inpfile, double* data, int len){
  int i = 0;
  for(i = 0; i < len; i++){
    fscanf(inpfile, "%lf", &data[i]);
    printf("%lf\n", data[i]);
  }
  return;
}

// average values in array with type double
double average(double data[], int len){
  int i  = 0;
  double sum = 0.0;
  for(i = 0; i < len; i++){
    sum += data[i];
  }
  return (sum / len);
}

// find maximum value in array
double maxValueInArray(double* data, int len){
  int i = 0;
  double max = data[0]; // init max with first item in array

  for(i = 0; i < len; i++){
    if(data[i] > max){
      max = data[i];
    }
  }
  return max;
}

// write array of doubles to an output file
void writeDoubleArrayToFile(FILE* output, double* data, int len){
  int i = 0;
  for(i = 0; i < len; i++){
    fprintf(output, "%lf", data[i]); // write number
    fprintf(output, "  "); // put space after number
  }
  return;
}

/**
 * @brief Main program entry point
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char* argv[]){
  // error checking for input arguments
  if(argc < 2){
    printf("ERROR: No argument for input file\n");
    exit(1);
  }
  printf("Input file: %s\n", argv[1]);
  FILE* ipf = fopen(argv[1], "r+");

  // check if input file wasn't opened
  if(ipf == NULL){
    printf("ERROR: Could no open file %s\n", argv[1]);
    exit(1);
  }

  
  
  int data_len = getSize(ipf); // get array size

  double data[data_len];

  readDataToArray(ipf, data, data_len);
  fclose(ipf); // release the input file reference
  printf("\n");

  double avg = average(data, data_len);
  double max = maxValueInArray(data, data_len);

  printf("Average: %lf\n", avg);
  printf("Maximum: %lf\n", max);

  /* output to file */
  const char* output_file = argv[2]; // read output file from arguments

  FILE* opf = fopen(output_file, "w+"); // open reference to output file
  // check if input file wasn't opened
  if(opf == NULL){
    printf("ERROR: Could no open file %s\n", argv[1]);
    exit(1);
  }
  

  /* write data to file */

  // header
  fprintf(opf, "Week 4 homework\n");
  fprintf(opf, "Nathan Page\n\n");

  // main data
  fprintf(opf, "Input: ");
  writeDoubleArrayToFile(opf, data, data_len);
  fprintf(opf, "\n");
  fprintf(opf, "Average: %lf\n", avg);
  fprintf(opf, "Maximum: %lf\n", max);

  //close file reference
  fclose(opf);
  
  return 0;
}