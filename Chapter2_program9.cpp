/*
-----------------------------------------------------------------------------------
Dillon Fleharty
Chapter 2 - Program #9
COSC 1337 Spring 2022
Flash Drive Price
-----------------------------------------------------------------------------------
An electronics company makes 64 gigabyte USB flash drives that cost them $8.00
apiece to prouce. Wtire a program to determine how much the company should sell 
them for if it wants to make a 35 percent profit. Display the result on the screen.
-----------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main(){
    
    // Create variables for the usb and the profit percentage
    double usb = 8.00;
    double profitRate = 1.35;

    /* Calculate the total of the two | Remember the rate is .35 so to avoid having to have additional
    steps like addition, just multiply by 1.(rate) */
    double usbProfit = usb * profitRate;

    // Display the results here
    cout << "\n-----------------------------------------------------------------------------------\n";
    cout << "A company selling these USB's with a 35 percent profit margin should sell them\n";
    cout << "for $" << usbProfit << "\n";
    cout << "-----------------------------------------------------------------------------------\n";

    // Always show that the program has completed, finished, ended, etc. 
    cout << "\n***End Program***\n\n";
    

    return 0;

}