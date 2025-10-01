//hashmapandJSON.cpp
//created by Chijenda Vang on 10/1/2025

#include <iostream>
#include "json.hpp"
#include <unordered_map>
using namespace std;

int main() {
    cout << "\n This is my json code \n" << endl;
    // create json object
    nlohmann::json myStulist = {
        {"Bob", 1884},
        {"Lizbeth", 7842}
    };

    // Access the values like a hash map
    cout << "\n Bob's student ID: (this is the key/value pair) " << myStulist["Bob"] << endl;
    cout << "\n Lizbeth's student ID: (this is the key/value pair) " << myStulist["Lizbeth"] << endl;

    // create a C++ hash map that uses three student names as keys and int values
    // their test scores - name (string) : score (int)

    unordered_map<string, int> myStudentTestScores;
    myStudentTestScores["Bob"] = 100;
    myStudentTestScores["Lizbeth"] = 99;
    myStudentTestScores["John"] = 87;

    cout << " \n Bob's score is: " << myStudentTestScores["Bob"] << endl;
    cout << " \n Lizbeth's score is: " << myStudentTestScores["Lizbeth"] << endl;
    cout << " \n John's score is: " << myStudentTestScores["John"] << endl;










    return 0;
}