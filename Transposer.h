#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Transposer
{
private:
	char storedChar_;
public:
	std::string reverseString(std::string& s);
	std::string posShiftChars(std::string& s, int posShift, bool doEven);
	std::string scramble(std::string& s, int intensity);
};

