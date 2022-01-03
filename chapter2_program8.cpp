/* 
and displays the number of square feet and the number of square meters in 1/2 acre of land. 
--------------------------------------------------------------------------------------------
Dillon Fleharty
Chapter 2 - Program 8
Land Calculation
and displays the number of square feet and the number of square meters in 1/2 acre of land. 
--------------------------------------------------------------------------------------------
In the United State, land is often measured in square feet. In many other countries, 
it is measured in square meters. One acre of land is equivalent to 43,560 square feet. 
A square meter is equivalent to 10.7639 square feet. Write a program that computers 
and displays the number of square feet and the number of square meters in 1/2 acre of land. 
--------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main() {

float acre = 43560;
float meter = 10.7639;
float halfAcreFeet = acre / 2;
float halfAcreMeter = (acre / meter) / 2;

cout << "\n--------------------------------------------------------------\n";
cout << "A 1/2 acre of land is " << halfAcreFeet << " square feet. \n";
cout << "A 1/2 acre of land is " << halfAcreMeter << " square meters.\n";
cout << "--------------------------------------------------------------\n";

cout << "\nEnd Program\n";
cout << "--------------------------------------------------------------\n";
    
    
    return 0;

}