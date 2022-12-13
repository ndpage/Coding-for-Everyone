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

int main(int argc, char** argv){
  printf("%d\n", randNum(num));
  return 0;
}

// Functions definitions
employee randEmployee(){
  // declare new employee struct
  employee em;
  
  dept rand_dept = (dept)(randNum(3));
  em.annual_salary = deptSalaryGen(rand_dept);
  em.department = rand_dept;
  em.social_security_number = genSocialSecurityNum();
  return em;
}

int deptSalaryGen(dept department){
  return 0;
}

unsigned int genSocialSecurityNum(){
  return 0;
}

int randNum(int max){
  return rand() % max;
}