#include "hw.h"
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */

int main(void){
  element hydrogen;

  hydrogen.name = "Hydrogen";
  hydrogen.symbol = 'H';
  hydrogen.weight = 1.008;
  
  printf("Name: %s\n", hydrogen.name);
  return 0;
}