#include "ArraysAndStrings.h"
#include <iostream>
#include <map>
#include <algorithm>

namespace CTCI
{
    ArraysAndStrings::ArraysAndStrings()
    {
    }

    ArraysAndStrings::~ArraysAndStrings()
    {
    }

    // This function uses a map to store each character as it traverses
    // the string. The implementation checks for uniqueness as it goes along,
    // so it'll be able to determine that a string is/isn't unique right
    // after processing the first non-unique character. If the first non-unique
    // character is at the very end of the string (worst case), this implementation
    // will have a time complexity of O(n).
    //
    // TODO: This really doesn't require a map. A vector would do the job. Initially,
    // I was thinking I may use the frequency of the character for something, but then
    // realized it was not necessary, and did not switch to a vector. The only real
    // change that would be caused would be how we use std::find and how we insert
    // into the vector. As of now, this stores a frequency of 1 for each character
    // that is added to the map, but since it'll never add the non-unique characters
    // it's useless. Eventually switch to a vector or other container to reduce the
    // amount of space used by this function.
    bool ArraysAndStrings::isUnique(std::string str)
    {
        bool retVal = false;
        int strLen =  str.length();

        // check if the string is valid
        if (strLen == 0)
        {
            retVal = false;
            std::cout << str << "Invalid string!" << std::endl;
        }
        // if a string is of size 1, it's unique
        else if (strLen == 1)
        {
            retVal = true;
            std::cout << str << " " << "is unique!" << std::endl;
        }
        // the string is longer, so more processing is needed
        else
        {
            std::map< char, int > charMap;

            // loop until the entire string has been processed, or we've determined
            // that it is not unique
            for (int i = 0; i < strLen; ++i)
            {
                // found in the map
                if (charMap.find(str[i]) != charMap.end())
                {
                    retVal = false;
                    std::cout << str << " " << "is not unique!" << std::endl;

                }
                // found in the map, meaning the string is not unique
                else
                {
                    // add it to the map
                    charMap.insert(std::make_pair< char, int >(str[i], 1));
                    retVal = true;
                }
            }
            
            // print out if it's unique
            if (retVal)
            {
                std::cout << str << " " << "is unique!" << std::endl;
            }
        }

        return retVal;
    }
} // namespace CTCI