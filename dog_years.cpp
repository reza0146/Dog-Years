#include <iostream>

int main() {
  
  int dog_age; 
  int early_years;
  int later_years = 0;
  int human_years;

  std::cout << "What is your dog's age in years?\n";
  std::cin >> dog_age;
  if (dog_age <= 2) {
    early_years = dog_age * 21 / 2;
  } else {
    early_years = 21;
    later_years = (dog_age - 2) * 4;
  }

  human_years = early_years + later_years;
  std::cout << "Your dog's human age is " <<  human_years << " years!\n"; 

  return 0;
  
}