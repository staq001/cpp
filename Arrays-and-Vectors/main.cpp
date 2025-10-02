#include <iostream>
#include <vector> // important

using namespace std;

//int main() {
////    char vowels[] {'a', 'e', 'i','o','u'};
////    cout <<"\nThe first vowel is " << vowels[0] << endl;
////    cout <<"\nThe last vowel is " << vowels[4] << endl;
////    
////    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
////    cout <<"\nThe first high temperature is " << hi_temps[0] << endl;
////
////    hi_temps[0] = 100.7;
////    cout <<"\nThe first high tempearture is now " << hi_temps[0] << endl;
//
//
//    int test_scores[5] {0}; // always initialize your arrays.
//    
////    cout << "\nFirst score at index 0 is " << test_scores[0]<< endl;
////    cout << "\nSecond score at index 1 is " << test_scores[1]<< endl;
////    cout << "\nThird score at index 2 is " << test_scores[2]<< endl;
////    cout << "\nFourth score at index 3 is " << test_scores[3]<< endl;
////    cout << "\nFifth score at index 4 is " << test_scores[4]<< endl;
////
////    cout << "\nEnter 5 test scores ";
////    
////    cin >> test_scores[0];
////    cin >> test_scores[1];
////    cin >> test_scores[2];
////    cin >> test_scores[3];
////    cin >> test_scores[4];
////    
////    cout << "\nFirst score at index 0 is " << test_scores[0]<< endl;
////    cout << "\nSecond score at index 1 is " << test_scores[1]<< endl;
////    cout << "\nThird score at index 2 is " << test_scores[2]<< endl;
////    cout << "\nFourth score at index 3 is " << test_scores[3]<< endl;
////    cout << "\nFifth score at index 4 is " << test_scores[4]<< endl;
//
////    MULTI-DIMENSIONAL ARRAYS     element_type array_name[dim1_size][dim2_size];
//    int movie_rating[3][4]; // 3 rows and 4 columns;
//    
//    
//    
//    return 0;
//}

//int main(){
//    
////    vector <char> vowels; // empty
////    vector <char> vowels {5}; // 5 initialized to zero
////    vector <char> vowels {'a','e','i','o','u'};
////    
////    cout << vowels[0] << endl;
////    cout << vowels[4] << endl;
//    
////    vector<int> test_scores{3}; // 3 elements all initailzed to zero
////    vector<int> test_scores{3, 100}; // 3 elements all initialized to 100
//
//    vector<int> test_scores {100, 87,45};
//        
////    cout << "\nTest scores using array syntax:" << endl;
////    cout << test_scores[0] << endl; 
////    cout << test_scores[1] << endl; 
////    cout << test_scores[2] << endl;
//
////    cout << "\nTest scores using vector syntax"<< endl;
////    cout << test_scores.at(0) << endl;
////    cout << test_scores.at(1) << endl;
////    cout << test_scores.at(2) << endl;
////
////    cout <<"\nThere are " << test_scores.size()<< " scores in the vector"<< endl;
//
//
////    cout << "\nEnter scores: ";
////    cin >> test_scores.at(0);
////    cin >> test_scores.at(1);
////    cin >> test_scores.at(2);
////    
////    cout << test_scores.at(0) << endl;
////    cout << test_scores.at(1) << endl;
////    cout << test_scores.at(2) << endl;
//
//
////    cout << "\n Enter a test score to add to the vector: ";
////    
////    int score_to_add(0);
////    cin >> score_to_add;
////    
////    test_scores.push_back(score_to_add);
////    
////    cout << "\nEnter one more test score to add to the vector: ";
////    
////    cin >> score_to_add;
////    
////    test_scores.push_back(score_to_add);
////    cout << "\nThere are " << test_scores.size()<<" scores now"<< endl;
////    
////    cout << test_scores.at(0) << endl;
////    cout << test_scores.at(1) << endl;
////    cout << test_scores.at(2) << endl;
////    cout << test_scores.at(3) << endl;
////    cout << test_scores.at(4) << endl;
////    
////    cout << "\nThis should cause an exception: "<< test_scores.at(10);
////    
//    // 2D-Vector --- is a vector of vectors
//    vector <vector<int>> movie_ratings {
//        {1,2,3,4},
//        {1,2,3,4},
//        {1,2,3,4}    
//    };   
//    
//    cout << "\nHere are the movie rating for reviewer #1 using array syntax: "<< endl; 
//    cout << movie_ratings[0][0] << endl;
//    cout << movie_ratings[0][1] << endl;
//    cout << movie_ratings[0][2] << endl;
//    cout << movie_ratings[0][3] << endl;
//
//
//    cout << "\nHere are the movie rating for reviewer #1 using array syntax: "<< endl; 
//    cout << movie_ratings.at(0).at(0) << endl;
//    cout << movie_ratings.at(0).at(1) << endl;
//    cout << movie_ratings.at(0).at(2) << endl;
//    cout << movie_ratings.at(0).at(3) << endl;
//
//
//    
//    return 0;
//}


int main (){
    vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << vector1.size() << endl;
    
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << vector2.size() << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << ""<< endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    return 0;
    }