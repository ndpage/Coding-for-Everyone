#include "hw.h"
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */
void delete(elem_list* head){
  if(head == NULL){
    return;
  }
  return delete(head->next);
}
int main(void){
  
  /*
  element_ts hydrogen  = {"Hydrogen", "H", 1.008};
  element_ts helium    = {"Helium","He", 4.003};
  element_ts lithium   = {"Lithium","Li", 6.941};
  element_ts beryllium = {"Beryllium","Be", 9.012};
  element_ts boron     = {"Boron","B", 10.811};
  element_ts carbon    = {"Carbon","C", 12.011};
  element_ts nitrogen  = {"Nitrogen","N", 14.007};
  element_ts oxygen    = {"Oxygen","O", 15.999};
  element_ts fluorine  = {"Fluorine","F", 18.998};
  element_ts neon      = {"Neon","Ne", 20.180};
*/
  // Declare head variable to store list address
  elem_list* head;
  
  // create a new list
  int i = 0;
  for(i = 0; i < 2; i++){
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
  
  // free the list
  free(head);
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

  // Traverse the list to find the elem_list at the specified index
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

// Print the list
void printList(elem_list* head) {
  while (head != NULL) {
    printf("%s ", head->data.name);
    printf("%s ", head->data.symbol);
    printf("%f \n", head->data.weight);
    head = head->next; // increment list
  }
  printf("\n");
  return;
}