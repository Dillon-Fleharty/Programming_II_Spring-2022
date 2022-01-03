/*
Dillon Fleharty
Chapter 2 Program #5
Miles Per Gallon
A car hold 16 gallons of gasonline and can travel 312 miles before refueling. 
Write a program that calculates the number of miles per gallon the car gets. 
Display the result on screen. 
*/

#include <iostream>

using namespace std;

int main() {

cout << "\n---------------------------------------------\n";
cout << "How many miles per gallon does the car get?\n\n";

int gallons = 16;
int miles = 312;

int milesPerGallon = miles / gallons;

cout << "The car gets " << milesPerGallon << " miles per gallon.\n";
cout << "---------------------------------------------\n";
cout << "\nEnd Program\n";


return 0;

}
