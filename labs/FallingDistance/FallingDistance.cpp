// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>
#include <cmath>


    //Include the std namespace so we don't have to to prefix it on everything
using namespace std;


const double GRAVITY = 9.8;
const double METER_TO_FEET = 3.28084;

// Function Prototypes
void displayProgramInfo();
double calculateFallingDistance(int seconds);
double convertToFeet(double meters);
void displayFallingTable(int time, char unit);

int main() {
    // Display the program information
    displayProgramInfo();


    // Display the falling distance table
    displayFallingTable() {

        (time, unit);

    return 0;
}
void displayProgramInfo() {

    cout << "FallingDistance" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
    cout << "=====================" << endl;
}

/ Prompts the user to input the falling time between 1 and 60 seconds
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
        unit = tolower(unit);  // Convert to lowercase for easy comparison
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

void displayFallingTable(int time, char unit) {
    cout << setw(10) << "Seconds" << setw(15) << "Distance" << endl;
    cout << "==============================" << endl;

    for (int i = 1; i <= time; ++i) {
        double distance = calculateFallingDistance(i); 
        if (unit == 'f') {
            distance = convertToFeet(distance);