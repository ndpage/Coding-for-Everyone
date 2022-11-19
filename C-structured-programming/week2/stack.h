/**
 * @file stack.h
 * 
 * @author Nathan page
 * @brief 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// stack data type
#define MAX_LEN 100
#define EMPTY -1
#define FULL (MAX_LEN - 1)

// Type definition
/**
 * @brief Type definition for stack data type. This stack contains char data types. 
 * 
 */
typedef struct {
  char s[MAX_LEN]; // declare array of characters as the 'stack'
  int top; // top variable is used to keep track of items in stack
} stack;

/**
 * @brief Function declarations for operations on stack
 * 
 * @param stk 
 */
// reset function
void reset (stack* stk);
// push function
void push(stack* stk, char c_inp);
// pop function 
char pop(stack* stk);
// top function
char top(const stack* stk);

//check if stack is empty
int is_empty(const stack* stk);
// check if stack is full
int is_full(const stack* stk);