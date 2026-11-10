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
    int userNumberInt;
    int count = 0;
    int factorial = 1;

    // get the user number
    std::cout
        << "Enter a positive number : ";
    std::cin >> userNumberStr;
    std::cout << "\n";

    // activate the try catch
    try {
        int userNumberInt = std::stoi(userNumberStr);
        if (userNumberInt > 0) {
            if (!(userNumberInt == 0) && !(userNumberInt == 1)) {
                do {
                    count = count + 1;
                    factorial = factorial * count;
                    std::cout << "Tracking " << count << " times through loop";
                    std::cout << "\n";
                } while (userNumberInt > count);
                std::cout << userNumberInt << "! = " << factorial;
                std::cout << "\n";
            } else {
                std::cout << "\n";
                std::cout << userNumberInt << "! = " << 1;
            }
        } else {
            std::cout << userNumberInt << " is not a positive number";
        }
    } catch (std::invalid_argument) {
        std::cout << userNumberInt << " is not an integer";
        std::cout << "\n";
    }
    std::cout << "Thanks for playing";
    std::cout << "\n";
}
