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
            }
        } while (interestRate < 1.0 || interestRate > 100.0);


           // Convert the percentage to a decimal
            interestRate /= 100;


            // Get the monthly payment from the user"

        do { 
            cout << "how much do you want to pay each month? ";
            cin >> payment;
            if (payment < 0 || payment > loanAmount) {
                cout << "invalid payment amount. it must be between $0 and the loan amount." << endl;
            }
            while (payment < 0 || payment > loanAmount);

            //display table headers

            cout << endl;
            cout << setw(6) << "month" << setw(12) << "balance" << setw(12) << "payment" 
                << setw(14) << "interest" << setw(18) << "new balance" << endl;
            cout << "------------------------------------------------------------------------" << endl;


            //Initial balance

            newBalance = loanAmount;

            // loop through each month (up to 12)

            for (month = 1; month <= 12; month++) {

                // Display initial balance for the first month (no payment and interest)

                if (month == 1) {
                    monthlyInterest = 0.0;
                    cout << setw(6) << month << setw(12) << fixed << setprecision(2) << "$ " << loanAmount
                        << setw(12) << "$ 0.00" << setw(14) << "$ 0.00" << setw(18) << "$ " << newBalance << endl;
                    continue;
                }

                // if the loan is fully paid off 

                if (newBalance <= 0) {
                    newBalance = 0;
                    cout << setw(6) << month << setw(12) << "$ 0.00" << setw(12) << "$ 0.00"
                        << setw(14) << "$ 0.00" << setw(18) << "$ 0.00" << endl;
                    continue;
                }

                //subtracy the payment from the balance before calculating in the interest 

                newBalance -= payment;
                if (newBalance < 0) {
                    payment += newBalance; // adjust the payment so it does not go below 0
                    newBalance = 0;
                }

                //calculate interest
                monthlyInterest = newBalance * interestRate;
                totalInterest += monthlyInterest; 
                totalPayments += payment;

                // update new balance with interest added
                newBalance += monthlyInterest;

                //Display the values for the month





      