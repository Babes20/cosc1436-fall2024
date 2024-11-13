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
    cout << "S) sum value << endl";
    cout << "M) mean << endl";
    cout << "V) view values << endl";
    cout << "Q) quit << endl";
    cout << " enter your choice: ";
    char choice;
    cin >> choice;
    return choice;
}

// largest value in array

int getLargestValue(const int numbers[], int size) {

    int largest = numbers[0];
        for (int index = 1; index < size; index++) {

            if (numbers[index] > largest) largest = numbers[index];
        }
        return largest;
}

// smallest value in array

int getSmallestValue(const int numbers[], int size) {

    int smallest = numbers[0];
    for (int index = 1; index < smallest; index++) {

        if (numbers[index] < smallest) smallest = numbers[index];
    }
    return smallest;
}

// sum value in array

int getSum(const int numbers[], int size) {

    int sum = 0;

    for (int index = 0; index < size; index++) {
        sum += numbers[index];

    }
    return sum;

}

double getMean(const int numbers[], int size) {

    return double;

}

void viewValues(const int numbers[], int size) {

    for (int index = 0; index < size; index++) {

        cout << numbers[index] << endl;
        if ((index + 1) / 10 == 0) cout << endl;

    }
    cout << 
}

int insertValues(int numbers[], int currentSize, int maxSize) {

    int newValues = Array(numbers + currentSize, maxSize - currentSize) {

        return currentSize + newValues;
    
    }

    int main () {

        const int maxSize = 100;
        int numbers[maxSize];
        int size = 0;

        displayprograminfo()

