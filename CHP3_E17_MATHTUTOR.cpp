/*
Math Tutor Program
Programmer: Montavius Spratley Burford
Date: 2/16/2025
Description: This program generates a simple addition problem for a student.
The student sees the problem, works on it, and presses Enter to reveal the answer.
*/

#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
	srand(time(0));

	int num1 = rand() % 900 + 100;
	int num2 = rand() % 900 + 100;

	cout << "\nSolve the following addition problem:\n";
		cout << " " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "------" << endl;

	cout << "Press Enter to see the answer...";
		cin.ignore();
	cin.get();

	int correct_answer = num1 + num2;
	cout << " " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "------" << endl;
	cout << " " << correct_answer << endl;

	return 0;
}