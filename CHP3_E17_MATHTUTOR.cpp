/*
Math Tutor Program (modified version)
Programmer: Montavius Spratley Burford
Date: 2/16/2025
Description: This program generates a simple addition problem for a student.
The student sees the problem, works on it, and presses Enter to reveal the answer.
Then display the correct answer and tell the student either 
"You are correct" or "Your answer is not correct."

*/


#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers between 100 and 999
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;
    int correct_answer = num1 + num2;
    int user_answer;

    // Display the math problem
    cout << "\nSolve the following addition problem:\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;

    // Get the student's answer
    cout << "Enter your answer: ";
    cin >> user_answer;

    // Display the correct answer
    cout << "\nThe correct answer is:\n";
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "  " << correct_answer << endl;

    // Check if the answer is correct
    if (user_answer == correct_answer) {
        cout << "You are correct!" << endl;
    } else {
        cout << "Your answer is not correct." << endl;
    }

    return 0;
}
}
