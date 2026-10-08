#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Variable Declarations
    string fullName;
    int userGuess;
    int regInput;
    bool isRegistered;

    // --- Part A - Player Information and Secret Number ---
    cout << "NUMBER GUESSING & REWARD SYSTEM\n";
    cout << "---------------------------------\n";

    cout << "Player Name: ";
    getline(cin, fullName);

    cout << "Registered Player (1 - Yes, 0 - No): ";
    cin >> regInput;
    isRegistered = (regInput == 1);

    cout << "Your Guess (1 to 20): ";
    cin >> userGuess;

    // Generate random secret number between 1 and 20
    int secretNum = (rand() % 20) + 1;
    cout << "Secret Number: " << secretNum << endl;

    // --- Part B - Guess and Performance Evaluation ---
    cout << "Guess Status: ";
    if (userGuess == secretNum) {
        cout << "PERFECT GUESS" << endl;
    } else if (userGuess < secretNum) {
        cout << "YOUR GUESS IS TOO LOW" << endl;
    } else {
        cout << "YOUR GUESS IS TOO HIGH" << endl;
    }

    // Calculate positive difference without abs()
    int diff;
    if (userGuess >= secretNum) {
        diff = userGuess - secretNum;
    } else {
        diff = secretNum - userGuess;
    }
    cout << "Difference: " << diff << endl;

    // Evaluate Performance
    cout << "Performance: ";
    if (diff == 0) {
        cout << "Excellent" << endl;
    } else if (diff >= 1 && diff <= 2) {
        cout << "Very Close" << endl;
    } else if (diff >= 3 && diff <= 5) {
        cout << "Close" << endl;
    } else {
        cout << "Far Away" << endl;
    }

    // --- Part C - Modulo Operation ---
    cout << "Number Type: ";
    if (secretNum % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    // --- Part D - Lucky Number and Reward ---
    cout << "\nREWARD SECTION\n";
    cout << "---------------------------------\n";

    // Generate Lucky Number between 1 and 10
    int luckyNum = (rand() % 10) + 1;
    cout << "Lucky Number: " << luckyNum << endl;

    // Calculate Bonus Points based on registration and Lucky Number
    int bonusPoints = 0;
    if (isRegistered) {
        if (luckyNum == 7) {
            bonusPoints = 10;
        } else if (luckyNum % 2 == 0) {
            bonusPoints = 5;
        } else {
            bonusPoints = 2;
        }
    } else {
        bonusPoints = 0;
    }
    cout << "Bonus Points: " << bonusPoints << endl;

    // Jackpot Status: Registered AND Guess == Secret Number AND Lucky Number == 7
    cout << "Jackpot Status: ";
    if (isRegistered && (userGuess == secretNum) && (luckyNum == 7)) {
        cout << "JACKPOT WINNER!" << endl;
    } else {
        cout << "No Jackpot" << endl;
    }

    return 0;
}
