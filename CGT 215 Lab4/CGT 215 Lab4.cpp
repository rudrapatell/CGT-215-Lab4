// CGT 215 Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Written by Rudra Patel 09/13/22

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	long factorial = 1.0;

	cout << "Enter a positive integer: ";
	cin >> n;

	if (n < 0)
		cout << "Error! Factorial of a negative number doesn't exist.";
	else {
		for (int i = 1; i <= n; ++i) {
			factorial *= i;
		}
		cout << "Factorial of " << n << " = " << factorial;
	}
}
void arithmetic() {
	// I recommend writing your arithmetic series code here
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "\n" << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
