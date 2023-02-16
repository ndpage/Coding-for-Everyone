#include "hw.h"
/**
 * @brief Main entry point for program
 * 
 * @return int 
 */

int main(void){
  // Declare periodic table as a element list
  element hydrogen = {"Hydrogen", "H", 1.008};
  elem_list* head = create(hydrogen);

  //Delcare first item in list
  element hydrogen;
  hydrogen.name = "Hydrogen";
  hydrogen.symbol = 'H';
  hydrogen.weight = 1.008;
  
  create(hydrogen);

  printf("Name: %s\n", hydrogen.name);
  return 0;
}

elem_list* create(element data){
  elem_list* head = (elem_list*)malloc(sizeof(elem_list));
  head->data = data;
  head->next = NULL;
  return head;
}

void insert(elem_list** head, elem_list data){

}