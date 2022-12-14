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
  // declare new employees and generate random data
  employee Rafael = randEmployee();
  employee Sumaiyyah = randEmployee();
  employee Karla = randEmployee();
  employee Kenny = randEmployee();
  employee Daniel  = randEmployee();
  employee Akshat = randEmployee();
  employee Frank  = randEmployee();
  employee Zifan = randEmployee();
  employee Shaoyang = randEmployee();
  employee Mike = randEmployee();
  
  printf("Rafael's salary:                  %d\n", Rafael.annual_salary);
  printf("Rafael's department:              %s\n", printDept(&Rafael));
  printf("Rafael's social security number:  %u\n", Rafael.social_security_number);
  printf("\n\n");
  printf("Sumaiyyah's salary:                  %d\n", Sumaiyyah.annual_salary);
  printf("Sumaiyyah's department:              %s\n", printDept(&Sumaiyyah));
  printf("Sumaiyyah's social security number:  %u\n", Sumaiyyah.social_security_number);
  printf("\n\n");
  printf("Karla's salary:                  %d\n", Karla.annual_salary);
  printf("Karla's department:              %s\n", printDept(&Karla));
  printf("Karla's social security number:  %u\n", Karla.social_security_number);

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
  int base;
  int variable = randNum(15000);
  switch(department){
    case HR: {
      base = 70000;
      break;
    }
    case Sales:{
      base = 80000;
      break;
    } 
    case Research: {
      base = 120000;
      break;
    }
    case Software: {
      base = 90000;
      break;
    }
    case Executive:{
      base = 200000;
      break;
    }
    default: {
      base = 75000;
      break;
    }
  }
  
  return base + variable;
}

unsigned int genSocialSecurityNum(){
  char* num_str = "";
  unsigned int rand_num;
  int i = 0;

  for(i=0; i<10; i++){
    rand_num = randNum(9);

    num_str += (char)rand_num;
  }
  return (unsigned int)num_str;
}

int randNum(int max){
  time_t t1;
  srand(time(&t1) + rand());
  return rand() % max + 1;
}

char* printDept(employee* em){
  switch(em->department){
    case HR: {
      return ("HR");
      break;
    }
    case Sales:{
      return ("Sales");
      break;
    } 
    case Research: {
      return ("Research");
      break;
    }
    case Software: {
     return ("Software");
      break;
    }
    case Executive:{
      return ("Executive");
      break;
    }
    default: {
     return ("N/A");
      break;
    }
  }
}