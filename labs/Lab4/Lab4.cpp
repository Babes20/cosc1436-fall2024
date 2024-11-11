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

    while (count < maxSize) {
        cout << " enter a value (0 to stop): ";
        cin >> value;
        if (value == 0)
            break;
        if (value < 0) {

        cout << "error: only positive values are allowed " << endl;
        continue;
    }

    numbers[count++] = value;

}
return count;

}

// display menu and user choice
char displayMenu() {
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

// largest value in array

int getLargestValue(const int numbers[], int size) {
    int largest = numbers
        for (int index = 1; index < size; index++) {

            if (numbers[index] > largest) largest = numbers[index];
        }
        return largest;
}



