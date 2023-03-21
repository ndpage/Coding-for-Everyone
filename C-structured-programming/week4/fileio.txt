#include <stdio.h>
#include <stdlib.h>

/**
 * @brief main entry point of program
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char* argv[]){
  if(argc < 3){
    printf("Missing arguments: Please specify input and output file names\n");
    exit(1);
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
  outfile = fopen(argv[2], "w+");
  while ((c = fgetc(inpfile)) != EOF) {
        printf("%c", c);
        fputc(c, outfile);
        size++;
  }
  printf("\n");

  // close file references/pointers
  fclose(inpfile);
  fclose(outfile);

}