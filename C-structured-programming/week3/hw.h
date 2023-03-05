/**
 * @file hw.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-02-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>

// Struct to represent an atomic element_s
typedef struct {
  char* name;
  char* symbol;
  double weight;
} element_s;

// 
typedef struct elem_list{
  element_s data;
  struct elem_list* next;
} elem_list;

/**
 * @brief Create list of atomic elements
 * 
 * @return elem_list* 
 */
elem_list* create();
/**
 * @brief Insert new atomic element_s into the list
 * 
 * @param head 
 * @param data 
 * @param index 
 */
void insert(elem_list** head, element_s data, int index);
/**
 * @brief Print all items in list
 * 
 * @param list 
 */
void printList(elem_list* list);