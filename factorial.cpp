// copyright (c) 2026 all rights reserved
// Created by : Adrian student
// Created on : 4th NOV 2026
// This program allows the user to enter a whole number.It then,
// uses a do..while loop to calculate the factorial of that number
#include <iostream>
#include <string>


int main() {
    // declare variables
    std::string userNumberStr;
    float userNumberFloat;
    int count = 0;
    int factorial = 1;

    // get the user number
    std::cout
        << "Enter a positive number : ";
    std::cin >> userNumberStr;
    std::cout << "\n";

    // activate the try catch
    try {
        float userNumberFloat = std::stof(userNumberStr);
        if (userNumberFloat >= 0) {
            if (userNumberFloat == static_cast<int>(userNumberFloat)) {
                if (!(userNumberFloat == 0) && !(userNumberFloat == 1)) {
                    do {
                        count = count + 1;
                        factorial = factorial * count;
                        std::cout << "Tracking " << count
                        << " times through loop";
                        std::cout << "\n";
                    } while (userNumberFloat > count);
                    std::cout << userNumberStr << "! = " << factorial;
                    std::cout << "\n";
                } else {
                    std::cout << userNumberStr << "! = " << 1;
                    std::cout << "\n";
                }
            } else {
                std::cout << userNumberStr << " is not an integer";
                std::cout << "\n";
            }
        } else {
            std::cout << userNumberStr << " is not a positive number";
            std::cout << "\n";
        }
    } catch (std::invalid_argument) {
        std::cout << userNumberStr << " is not an integer";
        std::cout << "\n";
        }
    std::cout << "Thanks for playing";
    std::cout << "\n";
}
