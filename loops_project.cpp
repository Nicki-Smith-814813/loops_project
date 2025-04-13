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
// Function prototype
void numberPyramid();

// Update menu
void showMenu() {
    cout << "========= Utility Program =========" << endl;
    cout << "1. Factorial Calculator" << endl;
    cout << "2. Number Pyramid" << endl;
    cout << "3. Exit" << endl;
    cout << "===================================" << endl;
    cout << "Enter your choice: ";
}

// Add case to main()
switch (choice) {
    case 1:
        factorialCalculator();
        break;
    case 2:
        numberPyramid();
        break;
    case 3:
        cout << "Goodbye!" << endl;
        break;
    default:
        cout << "Invalid choice. Try again." << endl;
}

// Function to print a pyramid pattern
void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        for (int num = 1; num <= i; num++) {
            cout << num << " ";
        }
        cout << endl;
    }
}
// Function prototype
void sumEvenOrOdd();

// Update menu
void showMenu() {
    cout << "1. Factorial Calculator" << endl;
    cout << "2. Number Pyramid" << endl;
    cout << "3. Sum of Even or Odd Numbers" << endl;
    cout << "4. Exit" << endl;
}

// Add case in switch
case 3:
    sumEvenOrOdd();
    break;

// Function to sum even or odd numbers up to a limit
void sumEvenOrOdd() {
    char choice;
    int n, sum = 0, i = 1;

    cout << "Choose (E)ven or (O)dd: ";
    cin >> choice;
    choice = tolower(choice);

    while (choice != 'e' && choice != 'o') {
        cout << "Invalid. Enter E for even or O for odd: ";
        cin >> choice;
        choice = tolower(choice);
    }

    cout << "Enter upper limit: ";
    cin >> n;

    do {
        if (choice == 'e' && i % 2 == 0) sum += i;
        else if (choice == 'o' && i % 2 != 0) sum += i;
        i++;
    } while (i <= n);

    cout << "Sum of " << (choice == 'e' ? "even" : "odd") << " numbers up to " << n << ": " << sum << endl;
}
