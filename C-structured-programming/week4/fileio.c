#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief main entry point of program
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char* argv[]){
  if(argc < 2){
    printf("Missing arguments: Please specify input file and output file (optional) \n");
    exit(1);
  }
  bool output = true;
  if(argc == 2){
    output = false;
  }

  FILE *inpfile, *outfile;
  char c;
  int size = 0;

  // file input
  inpfile = fopen(argv[1], "r+"); // open input file
  if(inpfile == NULL){
    printf("Input file handle is NULL");
    exit(1);
  }
  if(output){
    outfile = fopen(argv[2], "w+");
  }
  while ((c = fgetc(inpfile)) != EOF) {
        printf("%c", c);
        if(output){
          fputc(c, outfile);
        }
        size++;
  }
  printf("\n");
  printf("Size: %d\n", size);
  // close file references/pointers
  fclose(inpfile);
  if(output){
    fclose(outfile);
  }
  return 0;
}