// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>
#include <cmath>


    //Include the std namespace so we don't have to to prefix it on everything
using namespace std;


double Gravity = 9.8;
double Meter_ or_ Feet = 3.28084;

void displayProgramInfo();
int promptForTime();
char promptForUnit();



int main() {

// Display program information
    displayProgramInfo();

    // prompt the user for input

    int time = promptForTime();
    char unit = promptForUnit();


    return 0;

}
void displayProgramInfo() {

    cout << "FallingDistance" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
    cout << "=====================" << endl;
}
