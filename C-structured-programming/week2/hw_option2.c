/**
 * @file hw_option2.c
 * 
 * @author Nathan Page
 * @brief 
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "hw_option2.h"

int main(void){
  unsigned int snum = genSocialSecurityNum();
  printf("Social Security Number: %d", snum);
  return 0;
}

// Functions definitions
employee randEmployee(){
  // declare new employee struct
  employee em;
  
  dept rand_dept = (dept)3;
  em.annual_salary = deptSalaryGen(rand_dept);
  em.department = rand_dept;
  em.social_security_number = genSocialSecurityNum();
  return em;
}

int deptSalaryGen(dept department){
  return 0;
}

unsigned int genSocialSecurityNum(){
  char* num_str = "";
  unsigned int rand_num;
  int i = 0;

  for(i=0; i<10; i++){
    rand_num = rand() % 10;
    num_str += (char)rand_num;
  }
  return (int)num_str;
}
