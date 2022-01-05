/* 
Dillon Fleharty
COSC 1337 - Spring 2022
Chapter 2 - Program 19
Annual High Temperatures
--------------------------------------------------------------------------------
The average July high temperature is 85 degrees Fahrenheit in New York City, 
88 degree in Denver, and 106 degrees in Phoenix. Write a rogram that calculates 
and repors what the new average high July temperature would be for each of these 
cities if the temperatures rise by 2 percent.
--------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {

    double denver = 88 * 1.02;
    double nyc = 85 * 1.02;
    double pheonix = 106 * 1.02;


    cout << "\n\n              If temps rise by 2 percent               \n";
    cout << "--------------------------------------------------------\n";
    cout << "Denver new summer temp would be " << denver << " degrees.\n";
    cout << "New York City new summer temp would be "<< nyc << " degrees.\n";
    cout << "Phoenix new summer temp would be " << pheonix << " degrees.\n";
    cout << "--------------------------------------------------------\n";

    cout << "\n***End Program***\n\n\n";


    return 0;

}
