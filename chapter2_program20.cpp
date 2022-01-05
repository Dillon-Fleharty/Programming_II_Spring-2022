/*
Dillon Fleharty
COSC 1337 - Spring 2022
Chapter 2 - Program 20
How Much Paint
--------------------------------------------------------------------
A particular brand of paint covers 340 square feet per gallon. Write 
a program to determine and report approximately how many gallons of 
paint will be needed to paint two coats on each side of a wooden fence 
that is 6 feet high and 100 feet long. 
--------------------------------------------------------------------
*/

#include <iostream>
using namespace std;


int main(){

    double fence = 6 * 100;
    double paint = (fence / 340) * 2;

    cout << "\n------------------------------------------------\n";
    cout << "It will take " << paint << " gallons of paint to \n";
    cout << "paint the entire fence.\n";
    cout << "------------------------------------------------\n";

    cout << "\n***End Program***\n\n";

    return 0;
}
