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
  if(ipf == NULL){
    printf("ERROR: Could no open file %s\n", argv[1]);
    exit(1);
  }

  char c;
  const char* output = "answer-hw3";
  //FILE *opf = fopen(output, "w+");
  int size = 0;
  int i = 0;
  
  c = fgetc(ipf); // get first number
  int data_size = atoi(&c);
  printf("Size: %d\n", data_size);
  int data[data_size]; // initialize size of data array with first character
  while(true || size > 100000){
    c = fgetc(ipf);
    if(c == EOF){
      break;
    }
    printf("%c", c);
    if((int)c == 32){ //space character
      continue;
    } 
    data[i] = atoi(&c);
    i++;
    size++;
  }
  printf("\n");
  fclose(ipf); // release the input file reference
  
  return 0;
}


