#include <iostream>
#include <climits>

using namespace std;
//
//int main() {
//    cout <<"Enter the width of the room: ";
//    int room_width {0};
//    cin >> room_width;
//    
//    cout << "Enter the length of the room: ";
//    int room_length {0};
//    cin >> room_length;
//    
//    
//    cout << "The area of the room is " << room_length * room_width<< " square feet" <<endl;
//    return 0;
//}

//int main (){
//    /* CHARACTER TYPE*/
//    char middle_initial {'J'};
//    cout << "My middle name intial is "<< middle_initial<< endl;
//    
//    
//    /* INTEGER TYPES*/
//    unsigned short int exam_score {55};
//    cout << "My exam score was " << exam_score<< endl;
//    
//    int countries_represented {65};
//    cout << "There were " << countries_represented << " countries represented in my meeting"<< endl;
//    
//    long people_in_florida {20610000};
//    cout << "There are about "<< people_in_florida<< " in florida"<< endl;
//    
//    long long people_on_earth {7'600'000'000};
//    cout << "There are about " << people_on_earth << " people on earth" << endl;
//    
//    long long distance_to_alpha_centauri{9'461'000'000'000};
//    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " Kilometers"<<endl;
//    
//    
//    /* FLOATING POINT TYPES*/
//    
//    float car_payment {401.38};
//    cout << "My car payment is " << car_payment << endl;
//    
//    double pi {3.14159};
//    cout << "Pi is " << pi<< endl;
//    
//    long double large_amount {2.7e120};
//    cout << large_amount << " is a very big number"<< endl;
//    
//    
//    /* BOOLEAN  TYPES*/
//    
//    bool game_over {false};
//    cout << "The value of game_over is "<< game_over<< endl;
//    
//    /* OVERFLOW EXAMPLES */
//    short value1 {30000};
//    short value2 {1000};
//    
//    short product {value1 * value2}; // short- overflow error
//    cout << "The product of " << value1 << " and " << value2 <<" is " << product << endl;
//  
//    return 0;  
//}


//int main ()
//{
//    cout << "sizeof information" << endl;
//    cout << "===================" << endl;
//    
//    cout << "char: "<< sizeof(char) << " bytes" << endl;
//    cout << "int: " << sizeof(int) << " bytes" << endl;
//    
//    cout << "unsigned_int: "<< sizeof(unsigned int) <<" bytes "<<endl;
//    cout << "short: " << sizeof(short) << " bytes" << endl;
//    cout << "long: " << sizeof(long) << " bytes" << endl;
//    cout << "long long: " << sizeof(long long) << " bytes" << endl;
//
//    
//    cout << "===========================" << endl;
//    
//    cout << "float: " << sizeof(float) << " bytes" << endl;
//    cout << "double: " << sizeof(double) << " bytes" << endl;
//    cout << "long double: " << sizeof(long double) << " bytes" << endl;
//
//    // use values defined in climits.
//    cout << "====================================" << endl;
//
//
//    cout << "Minimum values" << endl;
//    cout << "char: " << CHAR_MIN << endl;
//    cout << "int: " << INT_MIN << endl;
//    cout << "short: " << SHRT_MIN << endl;
//    cout << "long: " << LONG_MIN << endl;
//    cout << "long long: " << LLONG_MIN << endl;
//
//    cout << "====================================" << endl;
//
//    cout << "Maximun values" << endl;
//    cout << "char: " << CHAR_MAX << endl;
//    cout << "int: " << INT_MAX << endl;
//    cout << "short: " << SHRT_MAX << endl;
//    cout << "long: " << LONG_MAX << endl;
//    cout << "long long: " << LLONG_MAX << endl;
//
//
//    cout << "====================================" << endl;
//    cout << "sizeof can also be used with variable names" << endl;
//
//    cout << "sizeof using variable names" << endl;
//    int age {21};
//    
//    cout << "age is " << sizeof(age)<< " bytes"<< endl;   
//    cout << "age is " << sizeof age<< " bytes"<< endl; 
//
//    double wage {22.24};
//    cout << "wage is " << sizeof wage<< " bytes"<< endl; 
//
//
//
//    cout << "=================================="<< endl; 
//    cout << ""<< endl; 
//
//
//
//    return 0;
//}


//int main (){
//    // CONSTANTS
//    
//   const double price_per_room{32.50};
//   const double sales_tax{0.06};
//    const double estimate_expiry{30.0};
//
//    
//    cout << "Hello, welcome to Frank's Carpet Cleaning Service"<< endl;
//    cout<< "\nHow many rooms would you like cleaned? "; 
//    
//    int num_of_rooms {0};
//    
//    cin >> num_of_rooms;
//    
//    cout << "\nEstimate for carpet cleaning service"<< endl;
//    cout<< "Number of rooms: "<< num_of_rooms<< endl;
//    
//    cout << "Price per room $"<< price_per_room << endl;
//    cout << "Cost $" <<  price_per_room* num_of_rooms<< endl;
//    
//    cout <<"Tax $"<< price_per_room * num_of_rooms * sales_tax<< endl;
//    
//    cout << "================================="<< endl;
//    cout << "Total estimate $"<< (price_per_room * num_of_rooms) + price_per_room* num_of_rooms*sales_tax<< endl;
//    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
//    cout << "=================================================" << endl;
//    
//    
//    
//    return 0;
//    
//}

int main (){
    
    const int price_per_small_room {25};
    const int price_per_big_room {35};
    const double sales_tax {0.06};
    
    int num_of_small_rooms {0};
    int num_of_big_rooms {0};

    cout << "Hello, Welcome to Frank's Cleaning Service"<< endl;
    cout << "Number of small rooms: ";
    
    cin >> num_of_small_rooms;
    
    cout << "Number of big rooms: ";
    cin >> num_of_big_rooms;
    
    int total = (num_of_small_rooms * price_per_small_room) + (num_of_big_rooms * price_per_big_room);
    double total_tax = sales_tax * total;
    
    double grand_total = total + total_tax;
    
    cout << "Price per small room: $" <<price_per_small_room<< endl;
    cout << "Price per big room: $" << price_per_big_room<< endl;
    cout << "Cost: $"<<total<< endl;
    cout << "Tax: $"<< total_tax<< endl;
    cout << "=================================" << endl;
    
    cout << "Total Estimate: $"<< grand_total<< endl; 
    cout << "Estimates are valid for 30 days.";
    
    return 0;
}