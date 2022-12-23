#include "linked_list.h"
#include <stdio.h>
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */

int main(){
  list int_list;
  list* head = create(1);
  int_list.data = head->data;
  int_list.next = head->next; 
  printf("Is list empty? %d\n",is_empty(&int_list));
  
  return 0;
}