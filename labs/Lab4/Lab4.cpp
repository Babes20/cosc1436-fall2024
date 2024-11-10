// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>



    //Include the std namespace so we don't have to to prefix it on everything
using namespace std;

void displayProgramInfo() {

    cout << "lab 4" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
}

// function for values and populate array
int Array(int numbers[], int maxSize) {

    int count = 0;
    int value;

    while (count < maxsize) {
        cout << "erroe: omly positive values are allowed " << endl;
    }

    number[count++] = value;

    }
    return count;
}

// display menu and user choice
char displaymenu() {
    cout << "Main menu << endl";
    cout << "A) add values << endl";
    cout << "L) Largest value << endl";
    cout << "S) smallest value << endl";
    cout << "M) mean << endl";
    cout << "V) view values << endl";
    cout << "Q) quit << endl";
    cout << " enter your choice: ";
    char choice;
    cin >> choice;
    return;
}


