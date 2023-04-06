#include<iostream> 

const double mi_to_km = 1.607;
inline double convert(double mi){return mi * mi_to_km;};

int main(){
  double miles;
  std::cout << "Enter number of miles: ";
  std::cin >> miles ;
  std::cout << miles << " miles equals " << convert(miles)<< " kilometers" << std::endl;

  return 0;
}