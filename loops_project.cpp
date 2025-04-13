//**********************************************************************
//Author.....: Nicki Smith
//Assignment.: Loops Project
//Description: a menu-driven system allowing users to
//perform various mathematical and string-based operations using loops. 
//The program will continue executing until the user decides to exit.
//************************************************************************

#include <iostream>
#include <string>
#include <cctype>
#include <limits>
using namespace std;

// Function Prototypes
void showMenu();
void factorialCalculator();
void numberPyramid();
void sumEvenOrOdd();
void reverseString();
void fibonacciSeries();
void checkPalindrome();
int getPositiveInteger();  // Helper function for input validation
bool isValidNumber(const string& str);  // Helper function to check if input is a number

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
                numberPyramid();
                break;
            case 3:
                sumEvenOrOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                fibonacciSeries();
                break;
            case 6:
                checkPalindrome();
                break;
            case 7:
                cout << "Goodbye! Thank you for using the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }

        cout << endl;

    } while (choice != 7);

    return 0;
}

void showMenu() {
    cout << "========= Interactive Utility Program =========" << endl;
    cout << "1. Factorial Calculator" << endl;
    cout << "2. Number Pyramid" << endl;
    cout << "3. Sum of Even or Odd Numbers" << endl;
    cout << "4. Reverse a String" << endl;
    cout << "5. Fibonacci Series" << endl;
    cout << "6. Palindrome Check" << endl;
    cout << "7. Exit" << endl;
    cout << "==============================================" << endl;
    cout << "Enter your choice: ";
}

// Helper function to get a valid positive integer
int getPositiveInteger() {
    int num;
    while (true) {
        cin >> num;
        if (cin.fail() || num < 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a positive integer: ";
        } else {
            return num;
        }
    }
}

// Helper function to check if a string contains only digits
bool isValidNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) return false;
    }
    return true;
}

// 1. Factorial Calculator (while loop)
void factorialCalculator() {
    cout << "Enter a positive integer: ";
    int n = getPositiveInteger();

    long long factorial = 1;
    int i = 1;

    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
}

// 2. Number Pyramid (for loop, nested loops)
void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    rows = getPositiveInteger();

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

// 3. Sum of Even or Odd Numbers (do-while loop)
void sumEvenOrOdd() {
    char choice;
    int n;
    int sum = 0;
    int i = 1;

    cout << "Choose (E)ven or (O)dd: ";
    cin >> choice;
    choice = tolower(choice);

    while (choice != 'e' && choice != 'o') {
        cout << "Invalid choice. Enter E for even or O for odd: ";
        cin >> choice;
        choice = tolower(choice);
    }

    cout << "Enter upper limit: ";
    n = getPositiveInteger();

    i = 1;
    do {
        if (choice == 'e' && i % 2 == 0) {
            sum += i;
        } else if (choice == 'o' && i % 2 != 0) {
            sum += i;
        }
        i++;
    } while (i <= n);

    if (choice == 'e') {
        cout << "Sum of even numbers up to " << n << ": " << sum << endl;
    } else {
        cout << "Sum of odd numbers up to " << n << ": " << sum << endl;
    }
}

// 4. Reverse a String (while loop)
void reverseString() {
    string str;
    cout << "Enter a string: ";
    cin.ignore(); // Clear buffer before getline
    getline(cin, str);

    string reversed = "";
    int i = str.length() - 1;

    while (i >= 0) {
        reversed += str[i];
        i--;
    }

    cout << "Reversed string: " << reversed << endl;
}

// 5. Fibonacci Series
void fibonacciSeries() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    n = getPositiveInteger();

    long long a = 0, b = 1, c;

    cout << "Fibonacci Series: " << endl;

    if (n == 1) {
        cout << a << endl;
        return;
    }

    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

// 6. Palindrome Check
void checkPalindrome() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);

    string original = str;
    string reversed = "";

    int i = str.length() - 1;
    while (i >= 0) {
        reversed += str[i];
        i--;
    }

    if (original == reversed) {
        cout << "The string \"" << original << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << original << "\" is NOT a palindrome." << endl;
    }
}


