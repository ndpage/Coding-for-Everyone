#include "week2_honors.h"
#include "hw_option2.h"

int main(void){

  const uint16_t deck_size = 52;     // standard deck size
  deck deck1 = malloc(sizeof(card_t)*52);

  shuffle(deck_size, &deck1);

  printf("Deck %d", deck1->pips);
  
  // free the memory
  free(deck1);

  return 0;
}

void shuffle(uint16_t deck_size, deck* deck){
  /* Function variable declarations */
  const uint8_t max_card_value = 13; // maximum card (pips) value in each suit

  int i = 0; // for loop helper variable

  for(i = 0; i < deck_size; i++){
      deck[i]->pips = randNum(max_card_value); 
      deck[i]->suit = (suit_t)randNum(deck_size);
    }
}

/**
 * @brief randNum generates a pseudo-random number up to the max passed as the argument
 * @example randNum(5) - Generates a random number between 0 to 5
 * @param max 
 * @return int 
 */
int randNum(int max)
{
  time_t t1;
  srand(time(&t1) + rand());
  return rand() % (max + 1);
}
