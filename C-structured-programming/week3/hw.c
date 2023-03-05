#include "hw.h"
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */

int main(void){
  // Declare head variable to store list address
  elem_list* head;
  
  head = create();   // Create a new linked list and update head variable
  
  // declare elements
  element_s hydrogen = {"Hydrogen", "H", 1.008};
  element_s helium = {"Helium","He", 4.003};
  element_s lithium = {"Lithium","Li", 6.941};
  element_s beryllium = {"Beryllium","Be", 9.012};
  
  insert(&head, hydrogen, 0);
  insert(&head, helium, 1);
  insert(&head, lithium, 2);
  insert(&head, beryllium, 3);
  // Print current list
  printList(head);

  return 0;
}

elem_list* create(){
  return (elem_list*)malloc(sizeof(elem_list));
}

void insert(elem_list** head, element_s data, int index){
  // create new list and set next to NULL
  struct elem_list* newElemList = (struct elem_list*)malloc(sizeof(struct elem_list));
  newElemList->data = data;
  newElemList->next = NULL;

  // If the index is 0, the newElemList should be the new head of the list
  if (index == 0) {
    newElemList->next = *head;
    *head = newElemList;
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
  previous->next = newElemList;
  newElemList->next = current;
}

// Print the list
void printList(elem_list* list) {
  while (list != NULL) {
    printf("%s ", list->data.name);
    printf("%s ", list->data.symbol);
    printf("%f \n", list->data.weight);
    list = list->next;
  }
  printf("\n");
}