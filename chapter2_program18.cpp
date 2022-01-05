/*
Dillon Fleharty
COSC 1337 - Spring 2017
Chapter 2 - Program 18
Future Ocean Levels
------------------------------------------------------------------------
During the past decade ocean levels have been rising faster than in the 
past, an average of approximately 3.3 millimeters per year. Write a 
program that computes how much ocean levels are expected to rise during
the next 15 years if they continue rising at this rate. Display the 
answer in both centimeters and inches. 
------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {

    double milli = 3.3 * 15;
    double inch = milli * .3937;

    cout << "\n---------------------------------------------------------------\n";
    cout << "The ocean will rise " << milli << " milliters in 15 years.\n";
    cout << "The ocean will rise " << inch << " inches in 15 years.\n";
    cout << "---------------------------------------------------------------\n";

    cout << "\n***End Program***\n";


    return 0;

}
