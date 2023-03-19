#include "hw.h"
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */

int main(void){

  // Declare head variable to store list address
  elem_list* head;
  
  int list_len = 0;
  printf("Enter number of items to insert into list: ");
  scanf("%d", &list_len);
  // create a new list
  int i = 0;
  for(i = 0; i < list_len; i++){
    element_ts input;
    printf("Enter name, symbol, weight: ");
    scanf("%s %s %lf", input.name, input.symbol, &input.weight);
    if(i==0){
      create(&head, input);
    } else{
      insert(&head, input, i);
    }
  }

  // Print current list
  printList(head);
  
  // free the list from memory
  delete(head);
  return 0; //exit program
}

/**
 * @brief Create - initializes new least head pointer
 * 
 * @param head 
 */
void create(elem_list* *head, element_ts init_data){
  *head = (elem_list*)malloc(sizeof(elem_list)); // assign allocated memory location to head variable
  (*head)->next = NULL;
  (*head)->data = init_data;
}

/**
 * @brief Insert new element into list
 * 
 * @param head 
 * @param data 
 * @param index 
 */
void insert(elem_list** head, element_ts data, int index){
  // create new list and set next to NULL
  elem_list* new_elem_list = (elem_list*)malloc(sizeof(struct elem_list));
  new_elem_list->data = data;
  new_elem_list->next = NULL;

  // If the index is 0, the new_elem_list should be the new head of the list
  if (index == 0) {
    new_elem_list->next = *head;
    *head = new_elem_list;
    return;
  }

  //Traverse the list to find the elem_list at the specified index
  elem_list* current = *head;
  elem_list* previous = NULL;
  int i = 0;
  for (i = 0; i < index && current != NULL; i++) {
    previous = current;
    current = current->next;
  }

  // Insert the new elem_list at the specified index
  previous->next = new_elem_list;
  new_elem_list->next = current;
  return;
}

/**
 * @brief print list
 * 
 * @param head 
 */
void printList(elem_list* head) {
    printf("\n");
    printf("============================\n");
    printf("== Element  Symbol  Weight  \n");
    printf("============================\n");
  while (head != NULL) {
    printf("| %s  %s  %lf\n", head->data.name, head->data.symbol, head->data.weight);
    head = head->next; // increment list
  }
  printf("============================\n");
  printf("\n");
  return;
}

/**
 * @brief Deletes node from list
 * 
 * @param head 
 */
void delete(elem_list* head){
  if(head == NULL){
    return;
  }
  free(head);
  return delete(head->next);
}