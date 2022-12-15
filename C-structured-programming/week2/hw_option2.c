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

#include "hw_option2.h" // include header file

// Main entry point of program
int main(void)
{
  printf("%d\n", randNum(5));
  printf("%d\n", randNum(4));
  // declare new employees and generate random data for each one
  employee Jim  = randEmployee();
  employee Sarah  = randEmployee();
  employee Allen  = randEmployee();
  employee Jerry  = randEmployee();
  employee Mike  = randEmployee();
  employee Jessica  = randEmployee();
  employee Karen  = randEmployee();
  employee Nick  = randEmployee();
  employee Dan  = randEmployee();
  employee Ben  = randEmployee();

  // Print each employee data and name
  printEmployee(Jim,"Jim");
  printEmployee(Sarah,"Sarah");
  printEmployee(Allen,"Allen");
  printEmployee(Jerry,"Jerry");
  printEmployee(Mike,"Mike");
  printEmployee(Jessica,"Jessica");
  printEmployee(Karen,"Karen");
  printEmployee(Nick,"Nick");
  printEmployee(Dan,"Dan");
  printEmployee(Ben,"Ben");

  return 0;
}

/**
 * @brief randEmployee() generates an employee data with random department, salary, and social security number
 * 
 * @return employee 
 */
employee randEmployee()
{
  // declare new employee struct
  employee em;

  dept rand_dept = (dept)(randNum(4));
  em.annual_salary = deptSalaryGen(rand_dept);
  em.department = rand_dept;
  em.social_security_number = genSocialSecurityNum();
  return em;
}
/**
 * @brief deptSalaryGen generates a random salary based on the depart passed as the argument
 * 
 * @param department 
 * @return int 
 */
int deptSalaryGen(dept department)
{
  int base;
  int variable = randNum(15000);
  switch (department)
  {
  case HR:
  {
    base = 70000;
    break;
  }
  case Sales:
  {
    base = 80000;
    break;
  }
  case Research:
  {
    base = 120000;
    break;
  }
  case Software:
  {
    base = 90000;
    break;
  }
  case Executive:
  {
    base = 200000;
    break;
  }
  default:
  {
    base = 75000;
    break;
  }
  }

  return base + variable;
}
/**
 * @brief genSocialSecurityNum will generate a pseudo-random social security number 9 digits long
 * 
 * @return unsigned int 
 */
unsigned int genSocialSecurityNum()
{
  char *num_str = "";
  unsigned int rand_num;
  int i = 0;

  for (i = 0; i < 10; i++)
  {
    rand_num = randNum(9);

    num_str += (char)rand_num;
  }
  return (unsigned int)num_str;
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

/**
 * @brief printDept prints the department of the enum dept in text format
 * 
 * @param em 
 * @return char* 
 */
char *printDept(employee *em)
{
  switch (em->department)
  {
  case HR:
  {
    return ("HR");
    break;
  }
  case Sales:
  {
    return ("Sales");
    break;
  }
  case Research:
  {
    return ("Research");
    break;
  }
  case Software:
  {
    return ("Software");
    break;
  }
  case Executive:
  {
    return ("Executive");
    break;
  }
  default:
  {
    return ("N/A");
    break;
  }
  }
}

/**
 * @brief Function to print employee information
 * 
 * @param em 
 * @param name 
 */
void printEmployee(employee em, char* name){
  printf("------------------------------------------\n");
  printf("%s's salary:                 %d\n", name, em.annual_salary);
  printf("%s's department:             %s\n", name, printDept(&em));
  printf("%s's social security number: %u\n", name, em.social_security_number);
  printf("------------------------------------------\n");
}