#include <iostream>
#include <cctype>
#include <string>
using namespace std;

//

struct Node {
    int value = 0;
    Node* next = nullptr;
};

struct LinkedList {
    Node* head = nullptr;
};

// Function prototypes
void displayProgramInfo();
void displayMainMenu();
char getMenuChoice();
void addValue(LinkedList& list);
void listValues(const LinkedList& list);
void deleteValue(LinkedList& list);
void clearList(LinkedList& list);

int main() {
    displayProgramInfo();
    LinkedList list;
    char choice;

    do {
        displayMainMenu();
        choice = getMenuChoice();

        switch (tolower(choice)) {
            case 'a':
                addValue(list);
                break;
            case 'l':
                listValues(list);
                break;
            case 'd':
                deleteValue(list);
                break;
            case 'c':
                clearList(list);
                break;
            case 'q':
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (tolower(choice) != 'q');
    clearList(list);
    return 0;
}


// program information
void displayProgramInfo() {
    cout << "lab 4" << endl;
    cout << "Frehiwot Tadesse" << endl;
    cout << "COSC 1436, Fall 2024" << endl;
    cout << "--------------------------------" << endl;
}

// display the main menu
void displayMainMenu() {
    cout << "Main Menu" << endl;
    cout << "--------------------" << endl;
    cout << "L) List" << endl;
    cout << "A) Add" << endl;
    cout << "D) Delete" << endl;
    cout << "C) Clear" << endl;
    cout << "Q) Quit" << endl;
}

char getMenuChoice() {
    char choice;
    return choice;
}
void addValue(LinkedList& list) {
    int value;
    cout << "Enter the integral value to add: ";
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();

        //
  Node* newNode = new Node {value, nullptr};
        if (!list.head) {
            list.head = newNode;
        } else {
            Node* current = list.head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
        cout << "Value added to the list." << endl;
    }