//FileIO.cpp
//created by Chijenda Vang on 9/29/2025

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    //copy and paste arrivingAnimals file into cmake-build-debug
    myFile.open("arrivingAnimals.txt", ios::in);//reads the file
    if (myFile.is_open()) {
        //This is a variable that will list lines in what's inside the file until no more lines remain from the file.
        string line;
        //while loop gets line from myFile.
        while (getline(myFile, line)) {
            //cout will output the lines combined with while loop so it will get a line, output the line, then keep repeating until no more lines are available.
            cout << line << endl;
        }
        //This will close the file.
        myFile.close();
        //If the code does not work, cout "Error opening file" which will tell the user that they made a mistake.
    }else {
        cout << "Error opening file" << endl;
    }

    system("pause");
    return 0;
};