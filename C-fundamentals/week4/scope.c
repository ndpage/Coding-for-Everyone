#include<stdio.h>
static int x = 5;

int addOne(int input){
  return input + 1;
}

int main(void){
  int x = 3;

  printf("Original: %d\nAdded: %d\n",x, addOne(x));
  printf("Original: %d\nAdded: %d\n",x, addOne(x));
  return 0;
}