/**
 * @file stack.c
 * 
 * @author Nathan page
 * @brief 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "stack.h"

/**
 * @brief Functions for operation on stack
 * 
 * @param stk 
 */
// reset function
void reset (stack* stk){
  stk->top=EMPTY;
}
// push function
void push(stack* stk, char c_inp){
  stk->top++;
  stk->s[stk->top] = c_inp;
}
// pop function 
char pop(stack* stk){
  return stk->s[stk->top--];
}
// top
char top(const stack* stk){
   return(stk->s[stk->top]);
}

//check if stack is empty
int is_empty(const stack* stk){
  return stk->top == EMPTY;
}
// check if stack is full
int is_full(const stack* stk){
  return stk->top == FULL;
}