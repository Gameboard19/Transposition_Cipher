// transposition_cipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "Transposer.h"
#include <conio.h>

int main()
{
    Transposer transposer;
    std::string sIn;
    int iIn;
    std::cout << "enter the string you want to encode:\n";
    std::getline(std::cin, sIn);
    //reverse the string
    std::cout << transposer.reverseString(sIn) << "\n";
    std::cout << "distance to reposition chars with even ASCII decimal values:\n";
    std::cin >> iIn;
    std::cin.ignore();
    std::cout << transposer.posShiftChars(sIn, iIn, true) << "\ndistance to reposition chars with odd ASCII decimal values:\n";
    std::cin >> iIn;
    std::cin.ignore();
    std::cout << transposer.posShiftChars(sIn, iIn, false) << "\nscramble intensity:\n";
    std::cin >> iIn;
    std::cin.ignore();
    std::cout << transposer.scramble(sIn, iIn) << "\nPress anything to exit...";
    _getch();
    return 0;
}