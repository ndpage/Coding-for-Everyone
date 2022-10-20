#include "main.h"

double radius = 0.0;
double area = 0.0;

enum options {
  ar,
  circ,
  dia,
  count
} opt;
char *commands[] = { "area", "circum" ,"dia" };

int main(int argc, char* argv[]){
  for(int i = 0; i < argc; i++){
    printf("Argument %i is %s\n", i, argv[i]);

  }
  if(argc < 2){
    return 1;
  }
  // parse options passed to main function
  for(int i = 0; i < count;i++){
    
    if(commands[i] == argv[1]){
      opt = i;
      break;
    }
  }
  // chose appropriate function based on option passed to main
  switch(opt){
    case 0 :
      // Get user input
      printf("Enter circle radius: ");
      scanf("%lf", &radius);

      // Calculate area
      area = PI * radius * radius;
      // Print results to output
      printf("Area of circle with radius %0.2f is %0.2f \n", radius, area);
      break;
    case 1:
      // Get user input
      printf("Enter circle radius: ");
      scanf("%le", &radius);
      // Calculate circumference
      double circ = 2 * PI * radius; 
      // Print results to output
      printf("Circumference of a circle with radius %0.2f is %0.2f \n", radius, circ);
      break;
    case 2:
      // Get user input
      printf("Enter circle radius: ");
      scanf("%le", &radius);
      // Calculate circumference
      double diameter = 2 * radius; 
      // Print results to output
      printf("Diameter of a circle with radius %0.2f is %0.2f \n", radius, diameter);
      break;
    default:
      printf("Please enter a valid option!\n");
      break;
  }
  
  return 0;
}