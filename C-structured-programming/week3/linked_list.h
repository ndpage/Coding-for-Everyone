#ifndef LINKED_LIST_H
#define HEADER_FILE_H
/**
 * @file linked_list.h
 * @author Nathan Page
 * @brief Type definitions for linked lists
 * @version 0.1
 * @date 2022-12-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdlib.h>

/**
 * @brief Integer list node
 * 
 */
typedef struct int_list{
  int data;
  struct int_list* next;
} int_list;

int_list* create(int data);
int is_empty(const int_list* l);

#endif