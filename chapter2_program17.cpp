/*
Dillon Fleharty
Chapter 2 - Program 17
COSC 1337 - Spring 2022
Past Sea Levels
-------------------------------------------------------------------------
The Earth's ocean levels have risen an average of 1.8 millimeters 
per year over the past century. Write a program that computes and 
displyas the number of centimeters and number of inches the oceans 
rose during this time. One millimeter is equivalent to 0.1 centimeters. 
One centimeter is equivalent to 0.3937 inches
-------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main(){

double centi = 1.8 * .1;
double inch = centi * .3937;

cout << "\n------------------------------------------------------------------------\n";
cout << "The ocean rose by " << centi << " centimeters and " << inch << " inches.\n";  
cout << "------------------------------------------------------------------------\n";

cout << "\n***End Program***\n";
    
    return 0;

}
