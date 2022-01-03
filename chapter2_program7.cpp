/*
Dillon Fleharty
Chapter 2 - Program 7
Number of Acres
One acre of land is equivalent to 43,450 square feet. Write a program that calculates
and displays the number of acres in a tract of land whose size is 869 X 360 feet.
*/

#include <iostream>
using namespace std;

int main() {

    cout << "\n                        Number of Acres                             \n";
    cout << "----------------------------------------------------------------------\n";
    
    double acre = 43450;
    double area = (869 * 360) / acre; 

    cout << "There are " << area << " acres on a plot of land that is 869 X 360ft. \n";
    cout << "----------------------------------------------------------------------\n";
    
    cout << "\nEnd Program\n";


    return 0;
}