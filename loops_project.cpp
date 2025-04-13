//**********************************************************************
//Author.....: Nicki Smith
//Assignment.: Loops Project
//Description: a menu-driven system allowing users to
//perform various mathematical and string-based operations using loops. 
//The program will continue executing until the user decides to exit.
//************************************************************************


#include <iostream>
using namespace std;

// Function prototype
void showMenu();
void factorialCalculator();

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
        cout << endl;
    } while (choice != 2);

    return 0;
}

// Displays the main menu
void showMenu() {
    cout << "========= Utility Program =========" << endl;
    cout << "1. Factorial Calculator" << endl;
    cout << "2. Exit" << endl;
    cout << "===================================" << endl;
    cout << "Enter your choice: ";
}

// Calculates factorial of a number using a while loop
void factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    while (n < 0) {
        cout << "Invalid input. Enter a positive integer: ";
        cin >> n;
    }

    long long result = 1;
    int i = 1;

    while (i <= n) {
        result *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << result << endl;
}
