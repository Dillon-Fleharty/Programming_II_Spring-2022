/*
Dillon Fleharty
Chapter 2 - Program 14
-------------------------------------------------------------
Basketball Player Height
The star player of a high school basketball team is 75 inches tall. 
Write a program to compute and display the height in feet/inches form. 
-------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {
 
    int playerHeight = 75;

    int feet = playerHeight / 12;
    int inch = 75 % 12;

    cout << "\n----------------------------------------------------\n";
    cout << "The player is " << feet << "ft " << inch << "in tall.\n";
    cout << "-----------------------------------------------------\n";

    return 0;

}
