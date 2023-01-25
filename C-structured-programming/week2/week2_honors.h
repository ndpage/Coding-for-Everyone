/**
 * @file week2_honors.h
 * @author Nathan Page
 * @brief 
 * @version 0.1
 * @date 2023-01-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Project description 

Use a struct to define a card as an enumerated member that is its suit value and a short that is its pips value.

Write a function that randomly shuffles the deck.

Submit your work as a text file. 

Then deal out 7 card hands and evaluate the probability that a hand has no pair, one pair, two pair, three of a kind, full house and 4 of a kind.  
This is a Monte Carlo method to get an approximation to these probabilities.  
Use at least 1 million randomly generated hands.

*/
#ifndef WEEK2_HONORS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

/**
 * @brief Enumeruation for card suit
 * 
 */
typedef enum {
  hearts,
  spades,
  diamonds,
  clubs
} suit_t;

/**
 * @brief Card struct that contains pip and suit
 * 
 */
typedef struct {
  short pips;
  suit_t suit;
} card_t;


typedef card_t* deck;

void shuffle(uint16_t deck_size, deck* deck);

#endif