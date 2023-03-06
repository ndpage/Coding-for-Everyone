#include "hw.h"
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */

int main(void){
  // Declare head variable to store list address
  elem_list* head;
  
  create(head);   // Create a new linked list and update head variable
  
  // declare elements
  element_s hydrogen  = {"Hydrogen", "H", 1.008};
  element_s helium    = {"Helium","He", 4.003};
  element_s lithium   = {"Lithium","Li", 6.941};
  element_s beryllium = {"Beryllium","Be", 9.012};
  element_s boron     = {"Boron","B", 10.811};
  element_s carbon    = {"Carbon","C", 12.011};
  element_s nitrogen  = {"Nitrogen","N", 14.007};
  element_s oxygen    = {"Oxygen","O", 15.999};
  element_s fluorine  = {"Fluorine","F", 18.998};
  element_s neon      = {"Neon","Ne", 20.180};
  
  insert(&head, hydrogen , 0);
  insert(&head, helium   , 1);
  insert(&head, lithium  , 2);
  insert(&head, beryllium, 3);
  insert(&head, boron    , 4);
  insert(&head, carbon   , 5);
  insert(&head, nitrogen , 6);
  insert(&head, oxygen   , 7);
  insert(&head, fluorine , 8);
  insert(&head, neon     , 9);
  // Print current list
  printList(head);

  return 0;
}

void create(elem_list* head){
   head = (elem_list*)malloc(sizeof(elem_list)); // assign allocated memory location to head variable
   head->next = NULL;
}

/**
 * @brief Insert new element into list
 * 
 * @param head 
 * @param data 
 * @param index 
 */
void insert(elem_list** head, element_s data, int index){
  //! Something in this function is inserting non NULL pointer at end of list
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
  for (int i = 0; i < index && current != NULL; i++) {
    previous = current;
    current = current->next;
  }

  // Insert the new elem_list at the specified index
  previous->next = new_elem_list;
  new_elem_list->next = current;
  return;
}

// Print the list
void printList(elem_list* list) {
  while (list != NULL) {
    printf("%s ", list->data.name);
    printf("%s ", list->data.symbol);
    printf("%f \n", list->data.weight);
    list = list->next; // increment list
  }
  printf("\n");
  return;
}