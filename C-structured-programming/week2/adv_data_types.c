/**
 * @file adv_data_types.c
 * 
 * @author Nathan page
 * @brief 
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#define MAX_LEN 100
#define EMPTY -1
/*
* strcture data type
*/

// Delcare a struct array 'deck' of type 'card'


typedef struct  {
  int num;
  char* suit;
} card;

// stack data type
typedef struct {
  char s[MAX_LEN]; // declare array of characters as the 'stack'
  int top; // top variable is used to keep track of items in stack
} stack;
// Stack reset function
void reset (stack* stk){
  stk->top=EMPTY;
}
// push function
void push(stack* stk, char c_inp){
  stk->top++;
  stk->s[stk->top] = c_inp;
};
// pop function 
char pop(stack* stk){
  return stk->s[stk->top--];
}

struct {

} s1;

int main()
{
    card deck[52];
    card* dk_ptr = &deck[0]; 

    deck[0].num = 1;
    deck[0].suit = "hearts";

    printf("Card %d is %d of %s\n", 1, dk_ptr->num, dk_ptr->suit);

    return 0;
}