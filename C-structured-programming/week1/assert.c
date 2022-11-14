/**
 * @file assert.c
 * 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <assert.h>
int main()
{

  // basic assert expression
  float x = 0;
  float y = 0;
  
  // True condition
  printf("Program will run is x is greater than or equal to y\n\n");
  // prompt for input
  printf("Enter two floats: ");
  scanf("%f %f", &x, &y);
  printf("\n");

  // check condition
  assert(x >= y);

  printf("%0.2f is greater than %0.2f\n", x, y);
  printf("Program ran successfully!\n");

  return 0;
}