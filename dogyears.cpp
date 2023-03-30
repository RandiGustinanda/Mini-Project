#include <iostream>

int main() {
  // declare variable and initzialize 
  int dog_age = 10;
  int early_years,later_years,human_years;
  // The first two years
  early_years = 21;
  // The following years
  later_years = (dog_age - 2)*4;
  // Your dog's age in human years
  human_years = later_years + early_years;

  std::cout << "My name is dogy,I am " << human_years << " years old in human years\n";

}