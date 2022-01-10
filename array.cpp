// Copyright (c) 2022 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program shows the user the largest number between 10 random numbers

#include <iostream>
#include <array>
#include <random>


template<size_t N>
int LargestNumber(std::array<int, N> listOfNumbers) {
    // this functions figures out the largest number

    int largest = listOfNumbers[0];

    for (int counter = 0; counter < listOfNumbers.size(); counter++) {
        if (listOfNumbers[counter] > largest) {
            largest = listOfNumbers[counter];
        }
    }

    return largest;
}


main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int singleRandomNumber;
    int maximum;

    // input
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        singleRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = singleRandomNumber;
        std::cout << "The random number " << loop_counter << " is "
                  << singleRandomNumber << std::endl;
    }
    std::cout << " " << std::endl;
    // call functions
    maximum = LargestNumber(randomNumbers);
    // output
    std::cout << "The largest number is: " << maximum << std::endl;
    std::cout << "\nDone." << std::endl;
}
