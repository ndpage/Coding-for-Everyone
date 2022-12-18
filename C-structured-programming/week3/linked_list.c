/**
 * @file linked_list.c
 * @author Nathan Page
 * @brief Functions for linked list operations
 * @version 0.1
 * @date 2022-12-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "linked_list.h"

list* create(){
  return malloc(sizeof(list));;
}

int is_empty(const list* l){
  return (l==NULL);
}


int main(){
  list int_list;
  list* head = create();
  
  return 0;
}