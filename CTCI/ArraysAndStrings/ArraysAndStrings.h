#ifndef ARRAYS_AND_STRINGS_H
#define ARRAYS_AND_STRINGS_H

#include <string>

namespace CTCI
{
    class ArraysAndStrings
    {
        public:
            // constructor
            ArraysAndStrings();
            // destructor
            ~ArraysAndStrings();

            // member functions
            // Determines whether a given string has all unique characters
            static bool isUnique(std::string str);
    };
}

#endif // ARRAYS_AND_STRINGS_H