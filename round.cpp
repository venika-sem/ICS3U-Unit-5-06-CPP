// Copyright (c) 2023 Venika Sem
//
// Created by: Venika Sem
// Created on: Jan 2023
// This program passes by reference

#include <cmath>
#include <iomanip>
#include <iostream>
#include <random>

    float numberRounding(float &number, int decimals) {
    // this function rounds off decimal numbers
    float numberFloat;
    int numberInt;
    float result;

    numberFloat = (number * pow(10, decimals)) + 0.5;
    numberInt = numberFloat;
    result = numberInt / pow(10, decimals);

    number = result;
}

int main() {
    int height;
    int radius;
    float result;
    try {
        float number;
        int decimalsNotToRound;
        std::cout << "Enter a decimal that you want to round: ";
        std::cin >> number;

        std::cout << "Enter how many decimal places you want: ";
        std::cin >> decimalsNotToRound;

        numberRounding(number, decimalsNotToRound);

        std::cout << std::endl;
        std::cout << number << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nThis input is invalid, insert a number."
                  << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
