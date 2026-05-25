#include <iostream>
#include <iomanip>

int main(){

  int num(255);

  // displaying using different bases
  std::cout << "n----------------------"<< std::endl;
  std::cout << std::dec << num << std::endl;
  std::cout << std::hex << num << std::endl;
  std::cout <<  std::oct << num << std::endl;

  // displaying showing the base prefix for hex and oct
  std::cout << "n----------------------" << std::endl;
  std::cout << std::showbase;
  std::cout << std::dec << num << std::endl;
  std::cout << std::hex << num << std::endl;
  std::cout << std::oct << num << std::endl;

  // displaying the hex value in uppercase;
  std::cout << "n----------------------" << std::endl;
  std::cout << std::showbase << std::uppercase;
  std::cout << std::hex << num << std::endl;

  // displaying the + sign in front of positive base 10 numbers
  std::cout << "n----------------------" << std::endl;
  std::cout << std::showpos;
  std::cout << std::dec << num << std::endl;

  // setting using the set default
  std::cout.setf(std::ios::showbase);
  std::cout.setf(std::ios::uppercase);
  std::cout.setf(std::ios::showpos);

  // resetting to defaults.
  std::cout << std::resetiosflags(std::ios::basefield);
  std::cout << std::resetiosflags(std::ios::showbase);
  std::cout << std::resetiosflags(std::ios::showpos);
  std::cout << std::resetiosflags(std::ios::uppercase);

  return 0;
}