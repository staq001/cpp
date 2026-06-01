#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
  std::ifstream in_file;
  char c;

  in_file.open("./poem.txt");

  if (!in_file)
  {
    std::cerr << "Problem opening file" << std::endl;
    return 1;
  }

  while (in_file.get(c))
  {
    std::cout << c;
  }

  std::cout << std::endl;

  in_file.close();
  return 0;
}