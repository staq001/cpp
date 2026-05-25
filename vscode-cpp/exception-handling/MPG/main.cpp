#include <iostream>

int main(){
  int miles;
  int gallons;
  double miles_per_gallon;

  std::cout << "Enter the miles: ";
  std::cin >> miles;

  std::cout << "Enter the gallons: ";
  std::cin >> gallons;

if(gallons!=0){
  miles_per_gallon = static_cast<double>(miles) / gallons;
}else {
  std::cerr << "Sorry! cannot divide by zero." << std::endl;
}
  std::cout << "Result: " << miles_per_gallon << std::endl;
  std::cout << "Bye" << std::endl;
  return 0;
}