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

    // see if a given string is unique, meaning all characters in the str are unique
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
}