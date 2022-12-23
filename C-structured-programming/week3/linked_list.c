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

/**
 * @brief Create new head
 * 
 * @param data 
 * @return list* 
 */
list* create(int data){
  list* head = malloc(sizeof(list));
  head->data = data;
  head->next = NULL;
  return head;
}

int is_empty(const list* l){
  return (l==NULL);
}