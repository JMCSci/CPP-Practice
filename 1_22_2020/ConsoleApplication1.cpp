/* ConsoleApplication1.cpp
 * More practice of conditionals, loops, functions, and user user input
 */
 
 
#include "pch.h"
#include <iostream>

using namespace std;

// multiply: Finds and returns the product of two numbers
int multiply(int value1, int value2) {
	return value1 * value2;
}

// blank: Creates a new line
void blank() {
	cout << "\n";
}

int main()
{
	int product = 0;
	int value1 = 0;
	int value2 = 0;

	cout << "Enter two numbers to be multiplied.\n";
	cout << "Value 1: ";
	cin >> value1;
	cout << "Value 2: ";
	cin >> value2;

	product = multiply(value1, value2);

	// Conditional determines whether or not product is less than 10
	if (product < 10) {
		cout << "Product is less than ten\n";
	}
	else {
		cout << "Product is greater than ten\n";
	}

	// Creates an array of size 10
	/* The only way to get the length of an array is to use sizeof(arr) / sizeof(arr[0]) */
	int arr[10];

	cout << "\nSize of array: " << sizeof(arr) / sizeof(arr[0]);

	blank();

	// Add even numbers to array
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (i == 0) {
			arr[0] = 1;
		}
		else {
			arr[i] = i * 2;
		}

	}

	blank();

	// Print array contents
	cout << "Array contents \n";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << "\n";
	}

	bool start = true;
	int j = 0;

	// See what position the number 6 is in the array
	while (start) {
		if (arr[j] == 6) {
			break;
		}
		else {
			j++;
		}
	}

	// Output for different numbers 
	if (j == 1) {
		cout << "\nThe number 6 is in the " << j << "st position of the array.";
	}
	else if (j == 2) {
		cout << "\nThe number 6 is in the " << j << "nd position of the array.";
	}
	else if (j == 3) {
		cout << "\nThe number 6 is in the " << j << "rd position of the array.";
	}
	else {
		cout << "\nThe number 6 is in the " << j << "th position of the array.";
	}

	blank();

	return 0;
}



