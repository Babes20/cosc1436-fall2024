// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>
#include <cmath>


    //Include the std namespace so we don't have to to prefix it on everything
    using namespace std;

    int main() {

        // Function to display program information
        cout << "Loan Calculator Program" << endl;
        cout << "Frehiwot Tadesse" << endl;
        cout << "COSC 1436, Fall 2024" << endl;
        cout << endl;

    // Display program information

        // Variables
        double loanAmount, interestRate, payment, monthlyInterest, newBalance, totalInterest = 0.0, totalPayments = 0.0;
        int month;

        // Get the initial loan amount from the user
        do {
            cout << "Please enter the loan amount (between $1 and $1000): ";
            cin >> loanAmount;
            if (loanAmount < 1 || loanAmount > 1000) {
                cout << "Invalid loan amount. Please enter a value between $1 and $1000." << endl;
            }
        } while (loanAmount < 1 || loanAmount > 1000);


            return 0;
        }