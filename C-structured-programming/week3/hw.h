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
#include <string.h>

// Struct to represent an atomic element_s
typedef struct {
  char name[20];
  char symbol[2];
  double weight;
} element_ts;

// struct defining list of elements
typedef struct elem_list{
  element_ts data;
  struct elem_list* next;
} elem_list;

/**
 * @brief Create list of atomic elements
 * 
 * @param head 
 */
void create(elem_list** head, element_ts init_data);

void delete(elem_list* head);

/**
 * @brief Insert new atomic element_s into the list
 * 
 * @param head 
 * @param data 
 * @param index 
 */
void insert(elem_list** head, element_ts data, int index);

/**
 * @brief Print all items in list
 * 
 * @param list 
 */
void printList(elem_list* list);