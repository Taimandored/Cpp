#ifndef ARRAYS_AND_STRINGS_H
#define ARRAYS_AND_STRINGS_H

#include <string>

namespace CTCI
{
    // This class contains static functions used to implement practice solutions to
    // the exercises from the 6th edition of the Cracking the Coding Interview book.
    // These solutions are likely not perfect/optimal, so beware.
    class ArraysAndStrings
    {
        public:
            // constructor
            ArraysAndStrings();
            // destructor
            ~ArraysAndStrings();

            // member functions
            // This function returns true, if the given string is unique, meaning that
            // each character in the string is not repeated. An empty string
            // is not considered unique. A string of length 1 is considered unique. When a
            // string is determined to not be unique, false is returned.
            static bool isUnique(std::string str);
    }; // classs CTCI
} // namespace CTCI

#endif // ARRAYS_AND_STRINGS_H