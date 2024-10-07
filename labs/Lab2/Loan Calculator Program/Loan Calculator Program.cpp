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
            cout << "please enter the loan amount (between $1 and $1000): ";
            cin >> loanAmount;
            if (loanAmount < 1 || loanAmount > 1000) {
                cout << "invalid loan amount. Please enter a value between $1 and $1000." << endl;
            }
        } while (loanAmount < 1 || loanAmount > 1000);

        //get the interest rate from the user

        do {
            cout << "please enter the interest rate (between 1.0 and 100.0): ";
            cin >> interestRate;
            if (interestRate < 1.0 || interestRate > 100.0) {
                cout << "invalid interest rate. please enter a value between 1.0 and 100.0." << endl;
            } while (interestRate < 1.0 || interestRate > 100.0);

           // Convert the percentage to a decimal
            interestRate /= 100;

            // Get the monthly payment from the user"

        do { 
            cout << "how much do you want to pay each month? ";
            cin >> payment;
            if (payment < 0 || payment > loanAmount) {
                cout << "invalid"



            return 0;
        }