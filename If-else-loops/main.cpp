#include <iostream>
#include <vector>

using namespace std;


//int main() {
//    char letter_grade {};
//    
//    cout << "Enter the letter grade you expect on the exam";
//    cin >> letter_grade;
//    
//    switch(letter_grade){
//      case 'a':
//      case 'A':
//        cout << "You need a 90 or above, studey hard!"<< endl;
//        break;
//    case 'b':
//    case 'B': 
//        cout << "You need 80-89 for a B, go study!"<< endl;
//        break;
//    case 'c':
//    case 'C': 
//        cout << "You need 70-79 for an average grade"<< endl;
//        break;    
//    case 'd':
//    case 'D': 
//        cout << "Hmm, you should strive for a better grade. All you need is a 60-69"<< endl;
//        break;    
//    case 'f':
//    case 'F': 
//    {
//        char confirm {};
//        cout << "Are you sure? (Y/N)";
//        cin >> confirm;
//        
//        if (confirm == 'y' || confirm == 'Y')
//           cout << "Okay, i guess you didnt study..." << endl;     
//        else if(confirm == 'n' || confirm == 'N')
//            cout << "Good, go study!"<< endl;
//        else
//            cout << "illegal choice" << endl;
//    }
//        break;
//    default: 
//        cout << "Sorry, thats not a valid grade"<< endl;
//     
//    }
//    
//    
//    cout << endl;
//    return 0;
//}

//int main(){

//enum Direction{
//    left, right, up, down
//    };
//    
//    Direction heading{left};
//    
//    switch(heading) {
//    case (left): 
//        cout << "Going left"<< endl;
//        break;
//    case (right): 
//        cout << "Going right"<< endl;
//        break;
//    case (up): 
//        cout << "Going up"<< endl;
//        break;
//    case (down): 
//        cout << "Going down"<< endl;
//        break;
//    default:
//        cout << "Okay!";
//    };
//    
//    cout << endl;
//    return 0;
//}

int main(){
    
//    for (int i {1}, j {5}; i <=5; ++i, ++j) {
//        cout<< i<< " * " << j << " : " << (i * j) << endl;
//    }

// range based for loop
//    int scores [] {100, 90, 50};
    
//    for(int score: scores)
//        cout << score<< endl;
    
    // using auto helps with the type issue, we neednt worry about the type.
//    for(auto score: scores)
//        cout << score<< endl;
//        
//    for (auto val: {1,3,3,5,5})
//        cout << val<< endl;
        
//    int number {};
//    cout << "Enter a number between 1 and 5: ";
//    cin >> number;
//        
// WHILE LOOP
//    while(number <=1 || number >=5){
//      cout << "Enter a number between 1 and 5: ";  
//      cin >> number; // continue to store new entries into the variable
//    }
//    cout << "You entered "<< number <<endl;


// DO-WHILE LOOP

    // do {
    //     cout << "Enter a number between 1 and 5 : ";
    //     cin >> number;
    // }   while(number <=1 || number>=5);
    // cout << "Thanks!"<< endl;

    

// // NESTED LOOPS
//     for(int num1{ 1 }; num1 <= 10; ++num1) {
//         for(int num2{ 1 }; num2 <= 10; ++num2){
//             cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//         };
//         cout << "-------------------" << endl;
//     }

// HISTOGRAM;
int num_items{};
cout << "How many data items do you have? ";
cin >>  num_items;

vector<int> data{};

for(int i{ 1 }; i <= num_items; ++i) {
    int data_item{};
    cout << "Enter data item " << i << ": ";
    cin >> data_item;
    data.push_back(data_item);
}

cout << "\nDisplaying Histogram:" << endl;
for (auto val: data){
    for(int i{ 1 }; i <= val;++i){
        if (i % 5==0){
            cout << "*";
        } else
            cout << "-";
    }
    cout << endl;

}

cout << endl;
return 0;
}

// the inner loop loops 10 times before the outer loop increments
// the outer loop increments 10 times, so the inner loop runs 100 times in total
// the outer loop runs 10 times, and the inner loop runs 10 times for each iteration of the outer loop.