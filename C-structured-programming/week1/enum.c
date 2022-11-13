/**
 * @file enum.c * 
 * 
 * @author Nathan Page (nathanpage.me)
 * @brief Enum data type
 * @version 0.1
 * @date 2022-11-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

typedef enum day {sun, mon, tues, wed, thur, fri, sat} day;


enum day next_day(enum day d)
{
    return((d + 1) % 7);
}

int main(void){
  day today;

  char* input = "sun";
  printf("%s", input);
  
  today = (day)input;

  printf("%d\n", next_day(today));

  return 0;
}