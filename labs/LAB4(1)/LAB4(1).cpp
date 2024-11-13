// Student Name : Frehiwot Tadesse
// Tarrant County College - COSC 1436
// Semester / Course: COSC 1436 Fall 2024
#include <iostream>
#include <iomanip>

using namespace std;

// Constants
const int MAX_SIZE = 100;

// Function prototypes
void displayProgramInfo();
int getUserInputArray(int arr[], int maxSize);
void displayMenu();
char getMenuSelection();
int getLargestValue(const int arr[], int count);
int getSmallestValue(const int arr[], int count);
int calculateSum(const int arr[], int count);
double calculateMean(const int arr[], int count);
void displayArray(const int arr[], int count);
int addNewValues(int arr[], int count, int maxSize);

// Main function
int main() {
    int values[MAX_SIZE] = {0};
    int count = 0;
    char choice;

    displayProgramInfo();
    count = getUserInputArray(values, MAX_SIZE);

    do {
        displayMenu();
        choice = getMenuSelection();

        switch (choice) {
            case 'L':
                cout << "Largest value = " << getLargestValue(values, count) << endl;
                break;
            case 'S':
                cout << "Smallest value = " << getSmallestValue(values, count) << endl;
                break;
            case 'A':
                cout << "Sum of values = " << calculateSum(values, count) << endl;
                break;
            case 'M':
                cout << fixed << setprecision(4);
                cout << "Mean of values = " << calculateMean(values, count) << endl;
                break;
            case 'V':
                displayArray(values, count);
                break;
            case 'I':
                count = addNewValues(values, count, MAX_SIZE);
                break;
            case 'Q':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 'Q');

    return 0;
}

// Function to display program information
void displayProgramInfo() {
    cout << "lab 4" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
}

// Function to get user input and fill the array
int getUserInputArray(int arr[], int maxSize) {
    int count = 0;
    int num;

    cout << "Enter a series of positive integers (0 to stop): " << endl;
    while (count < maxSize) {
        cout << "Enter a value: ";
        cin >> num;

        // Validate input
        if (cin.fail()) {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

      
        if (num == 0) break;

        
        if (num < 0) {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        arr[count++] = num;
    }

    return count;
}

// display the menu
void displayMenu() {
    cout << "\nMain Menu" << endl;
    cout << "L) Largest value" << endl;
    cout << "S) Smallest value" << endl;
    cout << "A) Sum of values" << endl;
    cout << "M) Mean of values" << endl;
    cout << "V) View all values" << endl;
    cout << "I) Insert new values" << endl;
    cout << "Q) Quit" << endl;
}

// user's menu selection
char getMenuSelection() {
    char selection;
    cout << "Select an option: ";
    cin >> selection;
    return toupper(selection);
}

// find the largest value
int getLargestValue(const int arr[], int count) {
    int largest = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Function to find the smallest value
int getSmallestValue(const int arr[], int count) {
    int smallest = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

// Function to calculate the sum of the array
int calculateSum(const int arr[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the mean of the array
double calculateMean(const int arr[], int count) {
    if (count == 0) return 0.0;
    return static_cast<double>(calculateSum(arr, count)) / count;
}

// Function to display the array values
void displayArray(const int arr[], int count) {
    cout << "Values in array: " << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << "\t";
        if ((i + 1) % 10 == 0) cout << endl; 
    }
    cout << endl;
}

// Function to add new values to the existing array
int addNewValues(int arr[], int count, int maxSize) {
    int num;

    cout << "Add new values (0 to stop): " << endl;
    while (count < maxSize) {
        cout << "Enter a value: ";
        cin >> num;

        // Validate input
        if (cin.fail()) {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        
        if (num == 0) break;

        
        if (num < 0) {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        arr[count++] = num;
    }

    return count;
}

