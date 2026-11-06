// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Calculates sum of numbers.

#include<iostream>
#include<string>

int main() {
    int counter, sum, user_num;
    std::string usernum_str;

    // Get the number the user wants to know the sum to.
    std::cout << "Enter the last number of the list\n";
    std::cin >> usernum_str;

    // Verify if it is an integer
     try {
        user_num = std::stoi(usernum_str);
        sum = 0;
        counter = 0;

        while (counter < user_num) {
            sum = sum + counter;
            counter = counter + 1;

            std::cout << counter << " through the loop\n";
        }

        // Display the sum to the user
        std::cout << "\nThe sum of numbers from 0 to "
        << counter << " is " << sum;
        // If the number is not an integer, tell the user to enter a valid one
     } catch (std::invalid_argument) {
         std::cout << usernum_str << " is not a valid number."
         " Please, enter a new one.\n";
        // Whatever the outcome, thank to user for using the code
     }
     std::cout << "\nThanks for using the code";
}
