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

void displayProgramInfo();
int promptForTime();
char promptForUnits();
double calculateFallingDistance();
void displayFallingTable();



int main() {

// Display program information
    displayProgramInfo();

    // prompt the user for input

    int time = promptForTime();
    char unit = promptForUnits();


    return 0;

}
void displayProgramInfo() {

    cout << "FallingDistance" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
    cout << "=====================" << endl;
}

int promptForUnits() {

    int time;
    
    do {
        cout << "enter the falling time in seconds (1-60): ";
        cin >> time;
        if (time < 1 || time > 60) {

            cout << "Error: please enter a time between 1 and 60 seconds. " << endl;

        }
    }while(time < 1 || time > 60);

    return 0;

}

char promptForUnits() {

    char unit;
    do {

        cout << "Do you want the results in Meter or Feet? (M/F) :";
        cin >> unit;
        unit = 
            if (unit != M && unit != F) {

                cout << Error: enetr M for Meters or F for Feet.

            }
    } while (unit != M && unit != F);

    return 0;
}

double calculateFallingDistance 

