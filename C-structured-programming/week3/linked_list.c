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

list* create(int data){
  list* head = malloc(sizeof(list));
  head->data = data;
  head->next = NULL;
  
  return head;
}

int is_empty(const list* l){
  return (l==NULL);
}


int main(){
  list int_list;
  list* head = create(1);
  int_list.data = head->data;
  int_list.next = head->next; 
  printf("Is list empty? %d\n",is_empty(&int_list));
  
  return 0;
}