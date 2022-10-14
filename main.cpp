/* Author: Evelyn Pan
 * Assignment Title: Project 8
 * Assignment Description: User guesses the right
 * number between two integers.
 *
 * Due Date: 2/11/22
 * Date Created: 2/10/22
 * Date Last Modified: 2/11/22
*/

/* Data Abstraction: Output file stream is opened.
 * Program asks the user to to enter two integers.
 * Program outputs the two integers.
 *
 // Input: The program reads input as the precursor.
 * The program uses loop function to try and match
 * whether or not the user's number matches the right guess.
 *
 // Process:
 * As the program is looping, it deciphers whether
 * the user's number entered is too low or too high.
 * The program also calculates how long it takes
 * for the user to guess the right num.
 *
 //Output:
 * outputs whether the user's number was too low or too high.
 * If the entered number is correct, it exports how many
 * tries it took the user to guess the right num.
 *
 // Assumptions:
 * It is assumed that:
 * If the user's guess is incorrect, computer indicates
 * if it was too high or too low.
 * If the user's guess is correct, computer reports guess
 * is correct and number of tries it took.
 *
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //if the guess is too low then it must output too low
    
    //Abstraction
    int n1, n2, randN, guess;
    int range;
    int count = 0;
    
    //Input
    
    cout << "Please enter 2 integers: ";
    cin >> n1 >> n2;
    cout << n1 << " " << n2 << endl << endl;
    
    //Process
    if (n1 > n2) {
        swap (n1, n2);
    }
    
    range = (n2 - n1 + 1);
    randN = rand()% range + n1;
    
    cout << "I'm thinking of a number between " << n1
    << " and " << n2 << "." << endl << endl;
    
    //Output
    while (guess != randN) {
        cout << "Enter guess: ";
        cin >> guess;
        cout << guess;
        count++;
        
        if (guess > randN) {
            cout << " - Too High" << endl << endl;
        }
        else if (guess < randN) {
            cout << " - Too Low" << endl << endl;
        }
        else if (guess == randN) {
            cout << endl << endl << "Correct, it took you " << count
            << " tries to guess my number." << endl << endl;
        }
    }
    
    return 0;
}
