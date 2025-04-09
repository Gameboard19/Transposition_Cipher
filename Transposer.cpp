#include "Transposer.h"

//#define DEBUG_MODE

std::string Transposer::reverseString(std::string& s) {
    for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
        storedChar_ = s[i];
        s[i] = s[j];
        s[j] = storedChar_;
#ifdef DEBUG_MODE
        std::cout << s << "\n";
#endif
    }
    return s;
}
std::string Transposer::posShiftChars(std::string& s, int posShift, bool doEven) {
    for (int i = 0; i < s.length(); i++) {
        if ((doEven ? (int)s[i] % 2 == 0 : (int)s[i] % 2 != 0)) {
            s.insert(s.begin() + ((i + posShift) % s.length()), s[i]);
            s.erase((((i + posShift) % s.length()) < i ? s.begin() + (i + 1) : s.begin() + i));
#ifdef DEBUG_MODE
            std::cout << s << "\n";
#endif
        }
    }
    return s;
}
std::string Transposer::scramble(std::string& s, int intensity) {
    for (int intensity_i = 0; intensity_i < intensity; intensity_i++) {
        for (int i = 0; i < s.length(); i += 2) {
            storedChar_ = s[(i - (intensity_i + 1)) % s.length()];
            s[(i - (intensity_i + 1)) % s.length()] = s[i];
            s[i] = storedChar_;
#ifdef DEBUG_MODE
            std::cout << s << "\n";
#endif
        }
    }
    return s;
}