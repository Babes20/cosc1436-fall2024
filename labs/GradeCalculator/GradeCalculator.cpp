// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024

#include <iostream>
#include <string>
#include <cmath> // C math function
#include <iomanip> // formatted output

//Include the std namespace so we don't have to to prefix it on everything
using namespace std;

int main()
{

     //Program Title and Course Information
    cout << "Lab 1 - GradeCalculator" << endl;
    cout << "Frehiwot Tadesse " << endl;
    cout << "COSC 1436 Fall 2024 " << endl;

    //Variables
    string studentName;
    int lab1;
    int lab2;
    int lab3;
    int lab4;
    int exam1;
    int exam2;
    int exam3;
    int Participation;
    int finalExam;

    //prompt user's name
    cout << "Please enter your name: ";
    cin >> studentName;

    //prompt the user for 4 lab grades

    cout << "please enter lab 1: ";
    cin >> lab1;

    cout << "please enter lab 2: ";
    cin >> lab2;

    cout << "please enter lab 3: ";
    cin >> lab3;

    cout << "please enter lab 4: ";
    cin >> lab4;


    //prompt the user for 3 exam grades

    cout << "please enter exam 1: ";
    cin >> exam1;

    cout << "please enter exam 2: ";
    cin >> exam2;

    cout << "please enter exam 3: ";
    cin >> exam3;

    //Additional Grades

    cout << "please enter Participation grade: ";
    cin >> Participation;

    cout << "please enter final exam grade: ";
    cin >> finalExam;

    //Display student's information

    cout << left << setw(8) << "studentName| " << setw(6) << "Grade|" << setw(6) << "" << "letter" << endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    cout << fixed << setprecision(2);
    cout << setw(8) << studentName << setw(6) << 95.67 << setw(6) << "" << "A" << endl;

    //Calculate and Display Lab Averages
    double labAverage = (lab1 + lab2 + lab3 + lab4) / 4.0;
    double examAverage = (exam1 + exam2 + exam3) / 3.0;

    //diplay user's name and grades
    cout << "Fre" << ", your lab grades are: " << endl;
    cout << "lab 1 = " << lab1 << endl;
    cout << "lab 1 = " << lab2 << endl;
    cout << "lab 1 = " << lab3 << endl;
    cout << "lab 1 = " << lab4 << endl;

        //display user's name and exam grades
    cout << "Fre" << ", your exam grades are: " << endl;
    cout << "exam 1 = " << exam1 << endl;
    cout << "exam 2 = " << exam2 << endl;
    cout << "exam 3 = " << exam3 << endl;

    //Display participation and final exam grades of the user
    cout << "Fre" << ", your other grades are: " << endl;
    cout << "Participation = " << Participation << endl;
    cout << "Final Exam = " << finalExam << endl;
    // Calculate weighted class average
    double classAverage = (labAverage * 0.65) + (examAverage * 0.20) + (Participation * 0.05) + (finalExam * 0.10);

    // Display class average
    cout << studentName << ", your class grade is:" << endl;
    cout << "Lab Average (65%) = " << labAverage << "%" << endl;
    cout << "Exam Average (20%) = " << examAverage << "%" << endl;
    cout << "Participation (5%) = " << Participation << "%" << endl;
    cout << "Final Exam (10%) = " << finalExam << "%" << endl;
    cout << "Class Average = " << classAverage << "%" << endl;

    return 0;
}