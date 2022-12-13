/**
 * @file hw_option2.h
 * @author Nathan Page
 * @brief 
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Include necesssary libraries
#include <stdio.h>

int main(void); // main function declaration

// The enum is the type for department
typedef enum {HR, Sales, Research, Software, Executive} dept;

// employee type definition struct
typedef struct {
  dept department;
  int annual_salary;
  unsigned int social_security_number;
} employee;

// Functions declaration
employee randEmployee();
int deptSalaryGen(dept department);
unsigned int genSocialSecurityNum();
int randNum(int max);