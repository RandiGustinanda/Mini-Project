#include <iostream>

int main() {
  
  double pesos, reais, soles;
  double dollars;
 
  std::cout << "Enter number of Colombian Pesos \n";
  std::cin >> pesos;
  std::cout << "Enter number of Colombian reais \n";
  std::cin >> reais;
  std::cout << "Enter number of Colombian soles \n";
  std::cin >> soles;

  // Pesos conversion rate: 0.00032
  double  conversion_rate1 = 0.00032;
  // Reais conversion rate: 0.27
  double  conversion_rate2 = 0.27;
  // Soles conversion rate: 0.3
  double  conversion_rate3 = 0.3;

  dollars = (conversion_rate1 * pesos) + (conversion_rate1 * reais) +(conversion_rate1 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
}