// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 25 2025
// This program is a guessing number from 0 - 9 using try catch
// It uses if else statement and try catch to avoid run time errors

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // Declare the random number as integer and user guess as string
    std::string guessNumberStr;
    int randomNumber;

    // Initialize random seed
    srand((unsigned)time(NULL));

    // generate a random number from 0 to 9
    randomNumber = rand() % 10;

    // Get user guess as string
    std::cout << "Guess a random number from 0 to 9: ";
    try {
        std::cin >> guessNumberStr;

        // Convert input to integer
        int guessNumberInt = std::stoi(guessNumberStr);

        // Check if the guessed number is valid as a number
        if (guessNumberInt == randomNumber) {
            std::cout << "You are correct!" << std::endl;
        } else {
            std::cout << "You are wrong, the correct answer was: "
            << randomNumber << std::endl;
        }
    } catch (...) {  // Catching all exceptions
        std::cout << guessNumberStr + " was not an integer." << std::endl;
    }

    std::cout << "Thanks for playing." << std::endl;
    return 0;
    }
