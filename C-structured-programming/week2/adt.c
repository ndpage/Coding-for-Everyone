/**
 * @file adv_data_types.c
 * 
 * @author Nathan page
 * @brief 
 * @version 0.1
 * @date 2022-11-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "adt.h"
#include "stack.h"

int main()
{
    // Stack declaration
    stack stk1;
    push(&stk1, 'N');
    
    
    card deck[52];
    card* dk_ptr = &deck[0]; 

    deck[0].num = 1;
    deck[0].suit = "hearts";

    printf("Card %d is %d of %s\n", 1, dk_ptr->num, dk_ptr->suit);

    return 0;
}