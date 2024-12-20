// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>
#include <cmath>


    //Include the std namespace so we don't have to to prefix it on everything
using namespace std;


const double GRAVITY = 9.8;
const double METER_OR_FEET = 3.28084;

// Function Prototypes
void displayProgramInfo();
int promptForTime();
char promptForUnits();
double calculateFallingDistance(int seconds);
double convertToFeet(double meters);
void displayFallingTable(int time, char units);

int main() {
    // Display the program information
    displayProgramInfo();

    // Prompt the user for input
        int time = promptForTime();
    char unit = promptForUnits();

    // Display the falling distance table
    displayFallingTable(time, unit);

    return 0;
}

void displayProgramInfo() {

    cout << "FallingDistance" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
    cout << "=====================" << endl;
}

// Prompts the user to input the falling time between 1 and 60 seconds
int promptForTime() {
    int time;
    do {
        cout << "Enter the falling time in seconds (1 - 60): ";
        cin >> time;
        if (time < 1 || time > 60) {
            cout << "Error: Please enter a time between 1 and 60 seconds." << endl;
        }
    } while (time < 1 || time > 60);
    return time;
}

// Prompts the user for the preferred unit (meters or feet) 
char promptForUnits() {
    char unit;
    do {
        cout << "Do you want the results in meters or feet? (m/f): ";
        cin >> unit;
        unit = tolower(unit);  
        if (unit != 'm' && unit != 'f') {
            cout << "Error: Please enter 'm' for meters or 'f' for feet." << endl;
        }
    } while (unit != 'm' && unit != 'f');
    return unit;
}

// Calculates the falling distance in meters using the formula: d = 0.5 * g * t^2
double calculateFallingDistance(int seconds) {
    return 0.5 * GRAVITY * pow(seconds, 2);
}
double convertToFeet(double meters) {
    return meters * METER_OR_FEET;
}

void displayFallingTable(int time, char unit) {
    cout << setw(10) << "Seconds" << setw(15) << "Distance" << endl;
    cout << "==============================" << endl;

    for (int index = 1; index <= time; ++index) {
        double distance = calculateFallingDistance(index); 
        if (unit == 'f') {
            distance = convertToFeet(distance);
        }

        cout << setw(10) << index << setw(15) << fixed << setprecision(2) << distance;
        if (unit == 'm') {
            cout << " m" << endl;  // Display meters
        } else {
            cout << " ft" << endl; // Display feet
        }
    }
}