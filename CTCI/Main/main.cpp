#include <iostream>
#include "ArraysAndStrings.h"

// Entry point into CTCI exercises
int main()
{
    // tests the ArraysAndStrings implementation
    std::string testStr = "";
    CTCI::ArraysAndStrings::isUnique(testStr);
    testStr = "J";
    CTCI::ArraysAndStrings::isUnique(testStr);
    testStr = "JJ";
    CTCI::ArraysAndStrings::isUnique(testStr);
    testStr = "Ja";
    CTCI::ArraysAndStrings::isUnique(testStr);
    testStr = "JaJ";
    CTCI::ArraysAndStrings::isUnique(testStr);
    testStr = "Jae";
    CTCI::ArraysAndStrings::isUnique(testStr);
}