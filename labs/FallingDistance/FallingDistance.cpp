// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>
#include <cmath>


    //Include the std namespace so we don't have to to prefix it on everything
using namespace std;


double Gravity = 9.8;
double Meter_or_Feet = 3.28084;

//  function prototypes

void displayProgramInfo();
int promptForTime();
char promptForUnits();
double FallingDistanceCalculation();
void displayFallingTable();
int seconds;
double meters;




int main() {

// Display program information
    displayProgramInfo();

    // prompt the user for input

    int time = promptForTime();
    char unit = promptForUnits();

    //display falling distance table

    displayFallingTable();
    
        (time, unit);

    return 0;

}

void displayProgramInfo() {

    cout << "FallingDistance" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
    cout << "=====================" << endl;
}

int promptForTime() {

    int time;
    
    do {
        cout << "enter the falling time in seconds (1-60): ";
        cin >> time;
        if (time < 1 || time > 60) {

            cout << "Error: please enter a time between 1 and 60 seconds. " << endl;

        }
    }while(time < 1 || time > 60);

    return time;

}

char promptForUnits() {

    char unit;
    do {

        cout << "Do you want the results in Meter or Feet? (M/F) :";
        cin >> unit;
        if (unit != 'M' && unit != 'F') {

            cout << "Error: please enter 'M' for Meters or 'F' for Feet. " << endl;

            }
    } while (unit != 'M' && unit != 'F');

    return unit;
}

double FallingDistanceCalculator() {
    return 0.5 * Gravity * pow(seconds, 2);

}

