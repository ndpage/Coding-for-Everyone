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

// Struct to represent an atomic element
typedef struct {
  char* name;
  char* symbol;
  double weight;
} element;

// 
typedef struct elem_list{
  element data;
  struct elem_list* next;
} elem_list;

elem_list* create(element data);
void insert(elem_list** head, elem_list data);
