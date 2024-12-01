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

        switch ((choice)) {
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
    } while (choice) != 'q';
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

    //list all values in the linked list
    void listValues(const LinkedList & list) {
        if (!list.head) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* current = list.head;
        cout << "List contents: ";
        while (current) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    //delete a value from the linked list

    void deleteValue(LinkedList& list) {
        if (!list.head) {
            cout << "The list is empty. Nothing to delete." << endl;
            return;
        }

        int value;
        cout << "Enter the integral value to remove: ";
        while (!(cin >> value)) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        Node* current = list.head;
        Node* previous = nullptr;

        while (current) {
            if (current->value == value) {
                if (previous) {
                    previous->next = current->next;
                } else {
                    list.head = current->next;
                }
                delete current;
                cout << "Value removed from the list." << endl;
                return;
            }
            previous = current;
            current = current->next;
        }
        cout << "Value not found in the list." << endl;
    }

    //clear all values from the linked list

    void clearList(LinkedList& list) {
        char confirm;
        cout << "Are you sure you want to clear the list? (Y/N): ";
        cin >> confirm;
        if (tolower(confirm) != 'y') {
            cout << "List not cleared." << endl;
            return;
        }

        Node* current = list.head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        list.head = nullptr;
        cout << "List cleared." << endl;
    }