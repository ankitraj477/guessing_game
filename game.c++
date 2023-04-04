#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // seed the random number generator
    int number = rand() % 10 + 1; // generate a random number between 1 and 10
    cout << "I'm thinking of a number between 1 and 10. Can you guess it?" << endl;
    int guesses[5];
    int numGuesses = 0;
    while (numGuesses < 5) {
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;
        if (cin.fail()) { // check for invalid input
            cout << "Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        guesses[numGuesses] = guess;
        numGuesses++;
        if (guess == number) {
            cout << "Congratulations! You guessed the number in " << numGuesses << " attempts." << endl;
            return 0;
        }
        else if (guess < number) {
            cout << "Your guess is too low." << endl;
        }
        else {
            cout << "Your guess is too high." << endl;
        }
    }
    cout << "Sorry, you didn't guess the number. The number was " << number << "." << endl;
    return 0;
}
