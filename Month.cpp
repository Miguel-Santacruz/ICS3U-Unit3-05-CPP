// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program says the number of a month

#include <iostream>
#include <string>

int main() {
    // This function says the number of a month
    std::string monthNumberAsString;
    int monthAsInt;

    // Input
    std::cout << "Enter the number of the month (ex: 1 for January): ";
    std::cin >> monthNumberAsString;

    monthAsInt = stoi(monthNumberAsString);

    // Process & Output
    if (monthAsInt < 10) {
        switch (monthAsInt) {
            case 1 :
                std::cout << "January" << std::endl;
                break;
            case 2 :
                std::cout << "February" << std::endl;
                break;
            case 3 :
                std::cout << "March" << std::endl;
                break;
            case 4 :
                std::cout << "April" << std::endl;
                break;
            case 5 :
                std::cout << "May" << std::endl;
                break;
            case 6 :
                std::cout << "June" << std::endl;
                break;
            case 7 :
                std::cout << "July" << std::endl;
                break;
            case 8 :
                std::cout << "Agust" << std::endl;
                break;
            case 9 :
                std::cout << "September" << std::endl;
                break;
        }
    } else if (monthAsInt == 10) {
        std::cout << "October" << std::endl;
    } else if (monthAsInt == 11) {
        std::cout << "November" << std::endl;
    } else if (monthAsInt == 12) {
        std::cout << "December" << std::endl;
    } else {
        std::cout << "There are not that many months ._." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
