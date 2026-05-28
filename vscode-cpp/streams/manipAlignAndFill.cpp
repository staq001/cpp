#include <iostream>
#include <iomanip>

void ruler(){
  std::cout << "\n12345678901234567890012345678900123456789001234567890" << std::endl;
}

int main(){
  int num1{1234};
  double num2 {1234.5678};
  std::string hello{"Hello"};


  // // defaults
  // std::cout << "\n--Defaults---------------------------------------------------------"
  // << std::endl;
  // ruler();
  // std::cout << num1<< num2 << hello << std::endl;

  // defaults - one per line
//  std::cout<< "\n--Defaults one per line ---------------------------------------------------------" << std::endl;

//   ruler();
//   std::cout << num1 << std::endl;
//   std::cout << num2 << std::endl;
//   std::cout<< hello << std::endl;

//   // set field width to 10;
//   std::cout << "\n--width to 10---------------------------------------------------------" << std::endl;

//   ruler();
//   std::cout << std::setw(10) << num1 << num2 << hello << std::endl;


  // // set field width to 10 for the first two outputs.
  // std::cout << "\n--width to 10 for num1 and num2---------------------------------------------------------" << std::endl;

  // ruler();
  // std::cout << std::setw(10) << num1 
  // << std::setw(10) << num2 
  // << hello << std::endl;

  // // set field width to 10 for the all 3 outputs.
  // std::cout << "\n--width to 10 for all 3 outputs---------------------------------------------------------" << std::endl;

  // ruler();
  // std::cout << std::setw(10) << num1
  //           << std::setw(10) << num2 
  //           << std::setw(10) << hello << std::endl;

  // // set field width to 10 for the all 3 outputs na djustify all left
  // std::cout << "\n--width to 10 for all 3 outputs and justify all left---------------------------------------------------------" << std::endl;

  // ruler();
  // std::cout << std::setw(10) << std::left << num1
  //           << std::setw(10) << std::left << num2 
  //           << std::setw(10) << std::left << hello << std::endl;


  // // set fill to dash.
  // // this is persistent
  // // then repeat the previous display.
  // std::cout << std::setfill('-');
  // std::cout << "\n--width to 10 for num1 and num2 and hello left for all setfill to dash---------------------------" << std::endl;

  // ruler();
  // std::cout << std::setw(10) << std::left << num1
  //           << std::setw(10) << std::left << num2
  //           << std::setw(10) << std::left << hello << std::endl;

  // set width to 10 for all, left justify all and carry the setfill character.
  std::cout << "\n--width to 10 for num1 and num2 and hello - setfill varies-----------------------" << std::endl;
  ruler();
  std::cout << std::setw(10) << std::left << std::setfill('*') << num1
            << std::setw(10) << std::left << std::setfill('#') << num2
            << std::setw(10) << std::left << std::setfill('-') << hello << std::endl;

  //
  std::cout << std::endl
            << std::endl;
  return 0;
}