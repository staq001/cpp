#include <iostream>
#include <string>


double calculate_mpg(int miles, int gallons)
{
  if (gallons == 0)
    throw 0;
  if(miles< 0|| gallons< 0)
    throw std::string("Invalid input: miles and gallons must be positive.");
  return static_cast<double>(miles) / gallons;
}

int main()
{
  int miles;
  int gallons;
  double miles_per_gallon;

  std::cout << "Enter the miles: ";
  std::cin >> miles;

  std::cout << "Enter the gallons: ";
  std::cin >> gallons;

  try
  {
    miles_per_gallon = calculate_mpg(miles, gallons);
    std::cout << "Result: " << miles_per_gallon << std::endl;
  }
  catch (int &e){ // alwsys catch by reference!
    std::cerr << "Sorry! cannot divide by zero." << std::endl;
  }catch(std::string &e){
    std::cerr << e << std::endl;
  }

  std::cout << "Bye" << std::endl;
  return 0;
}