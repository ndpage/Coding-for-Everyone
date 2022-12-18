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
typedef struct {
  int data;
  list* next;
} list;

