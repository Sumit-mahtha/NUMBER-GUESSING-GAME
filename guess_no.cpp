#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(time(0));

    // Generate a random number between 1 and 100 ;
    int target = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    cout<<endl;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "There is a particular number between 1 to 100. Try to guess it." << endl;

    // Loop until the user guesses the correct number/target.
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else if (guess > target) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != target);

    return 0;
}
