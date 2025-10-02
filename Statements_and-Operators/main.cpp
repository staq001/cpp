#include <iostream>

using namespace std;

//int main() {
///* ASSIGNMENT OPERATOR */
//
//
//    int num1 {10};
//    int num2 {20};
//    
//    num1=num2;
//    
//    cout << "num1 is: " << num1 << endl;
//    cout << "num2 is: " << num2 << endl;
//
//
//    cout << endl;
//    return 0;
//}


//int main() {
///* ARITHMETIC OPERATOR */
//
//
//    int num1 {200};
//    int num2 {100};
//    
//    int result {0};
//    
//    result = num1 + num2;
//    cout << num1 <<" + "<< num2 << " = "<< result <<endl;
//
//    result = num1 - num2;
//    cout << num1 <<" - "<< num2 << " = "<< result <<endl;
//
//    result = num1 * num2;
//    cout << num1 <<" * "<< num2 << " = "<< result <<endl;
//
//    result = num1 / num2;
//    cout << num1 <<" / "<< num2 << " = "<< result<< endl;
//
//    result = num1 % num2;
//    cout << num1 <<" % "<< num2 << " = "<< result << endl;
//    
//    // integer division is kinda different, only returns the first number before the decimal place.
//    
//    cout << 5.0/10.0 << endl;
//    
//    
//    return 0;
//}

//int main(){
//   // convert eur to usd
// 
//    const double usd_per_eur {1.19};
//    
//    cout << "Welcome to the EUr to USD converter"<< endl;
//    cout<< "Enter the value in EUR: ";
//    
//    double euros{0.0};
//    double dollars {0.0};
//    cin >> euros;
//    
//    dollars = euros * usd_per_eur;
//    cout << euros << "euros is equivalent to "<< dollars << "dollars"<< endl;
//    
//    cout << endl;
//    
//    
//    
//    return 0;    
//}

//int main(){
//    /* INCREMENT/DECREMENT OPERATOR */
//
//    int counter {10};
//    int result {0};
////    
//    
//    // simple increment.
//    cout << "Counter: " << counter << endl;
//    
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//
//    counter ++;
//    cout << "Counter: " << counter << endl;
//
//    ++counter;
//    cout << "Counter: " << counter << endl;


// Example 2
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = ++counter ;
//    cout  << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
// Example 3
//
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = counter++ ;
//    cout  << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
    
// Example  4

//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = ++counter + 10;
//    
//    cout  << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

//
//// Example 5
//    counter = 10;
//    result = 0;
//    
//    cout << "Counter: " << counter << endl;
//    
//    result = counter++ + 10;
//    cout  << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
//    
//    cout << endl;
//    return 0;    
//}




//int main(){
//// Mixed Expression;
//
//    int total {};
//    int num1{}, num2{}, num3{};
//    const int count {3};
//    
//    cout << "Enter three integers separated by spaces: ";
//    cin >> num1 >> num2 >> num3;
//    
//    total = num1 + num2 + num3;
//    double average{0.0};
//    
//    // coercing the data type 'int' into 'double'
//    average =static_cast<double>(total) /count;
////    average =(double)total /count; // old-style;
//
//    
//    cout << "The 3 numbers were: "<<num1 << ", "<< num2 <<" ,"<< num3<< endl;
//    cout << "The sum of the numbers is: " << total << endl;
//    cout << "The average of the number is : "<< average << endl;
//    
//    cout << endl;
//    return 0;
//    
//}


//int main() {
//    // testing for equality
//    
//    bool equal_result {false};
//    bool not_equal_result {false};
////    
////    int num1 {}, num2 {};
////    
//    cout << boolalpha; // turns 1/0 to true/false;
////    
////    cout << "Enter two integers separated by a space: ";
////    cin >> num1 >> num2;
////    
////    equal_result = (num1 == num2);
////    not_equal_result = (num1 != num2);
////    cout << "Comparison result (equals): " << equal_result << endl;
////    cout << "Comparison result (not equals): " << not_equal_result<< endl;
//    
//    
//    
////    char char1{}, char2 {};
////    cout << "Enter two characters separated by space: ";
////    cin >> char1 >> char2;
////    
////    equal_result = (char1 == char2);  
////    not_equal_result = (char1 != char2);
////    cout << "Comparison result (equals): " << equal_result << endl;
////    cout << "Comparison result (not equals): " << not_equal_result<< endl;    
////   
//
//
////    double double1{}, double2 {};
////    cout << "Enter two characters separated by space: ";
////    cin >> double1 >> double2;
////    
////    equal_result = (double1 == double2);  
////    not_equal_result = (double1 != double2);
////    cout << "Comparison result (equals): " << equal_result << endl;
////    cout << "Comparison result (not equals): " << not_equal_result<< endl;    
//     
//     
//     
//    int num1{};
//    double double2 {};
//    cout << "Enter two characters separated by space: ";
//    cin >> num1 >> double2;
//    
//    equal_result = (num1 == double2);  
//    not_equal_result = (num1 != double2);
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result<< endl;    
//    
//    return 0;   
//}

//int main(){
//    int num1 {}, num2{};
//    
//    cout << boolalpha;
//    cout <<"Enter 2 integers separated by a space: ";
//    cin >> num1>> num2;
//    
////    cout << num1 << ">" << num2 << ":"<< (num1 > num2)<< endl;
////    cout << num1 << ">=" << num2 << ":"<< (num1 >= num2)<< endl;
////    cout << num1 << "<" << num2 << ":"<< (num1 < num2)<< endl;
////    cout << num1 << "<=" << num2 << ":"<< (num1 <= num2)<< endl;
//
//
//    const int lower {10};
//    const int upper {20};
//
//    cout << "\nEnter an integer that is greater than "<< lower<< ": ";
//    cin >>  num1;
//    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
//    
//    cout << "\nEnter an integer that is less than or equal to "<< upper << ": ";
//    cin >> num1;
//    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
//    
//    
//    return 0;       
//}
//
//int main(){
//// logical operators
//    
////    int num {};
////    const int lower {10};
////    const int upper {20};
//    
//    cout << boolalpha;
//    
//// determine if an entered integer is between two other integers.
////    //    assume lower << upper;
////    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ":";
////    cin >> num;
////    
////    bool within_bounds {false};
////    within_bounds = (num > lower && num < upper);
////    cout << num << " is between " << lower<< " and "<< upper << ": "<< within_bounds << endl;
////    
//
//// determine if an integer is outside two other integers.
////    //    assume lower << upper;
////    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
////    cin >> num;
////    
////    bool outside_bounds {false};
////    outside_bounds = (num < lower || num > upper);
////    cout << num << " is outside " << lower<< " and "<< upper << ": "<< outside_bounds << endl;
// 
//// determine if an entered integer is exactly on the boundary.
////    //    assume lower << upper;
////    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
////    cin >> num;
////    
////    bool on_bounds {false};
////    on_bounds = (num == lower || num == upper);
////    cout << num << " is on one of the bounds which are " << lower<< " and "<< upper << ": "<< on_bounds << endl;
// 
// 
//// determine if you need to wear a coat based on temperature and wind speed.
//    bool wear_coat{false};
//    double temperature{};
//    int wind_speed{};
//    
//    const int wind_speed_for_coat {25}; // wind over this value requires a coat;
//    const double temperature_for_coat {45}; // temp below this value requires at coat
//    
//    
//    // Requires a coat if either wind is too high OR temperature is too low.
//    cout << "\nEnter the current tempaerature in (F): ";
//    cin >> temperature;
//    cout << "Enter windspeed in (mph): ";
//    cin >> wind_speed;
//
//
//    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
//    cout << "Do you need to wear a coat using OR? "<< wear_coat<< endl;
//
//    // Require a coat if BOTH the windspeed is too high AND temperature is too low
//    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
//    cout << "Do you need to wear a coat using AND? " << wear_coat<< endl;
//    
//    cout << endl;
//    
//    
//    return 0;
//}
