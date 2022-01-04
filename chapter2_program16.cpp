/*
Dillon Fleharty
Chapter 2 - Program 16
COSC 1337 - Spring 2022
Engery Drink Consumption
----------------------------------------------------------------------------
A soft drink company recently surveyed 16,500 of its customers and found 
that approximately 15 percent of those surveyed purchase one or more 
energy drinks per week. Of those customers who purchase energy drinks, 
approximately 52 percent of them purchase citrus flavored energy drinks.
Write a program that displays the following: 
    * The approximate number of customers in the survey who purchase one 
      or more energy drinks per week.
    * The approximate number of customers in the survey who purchase citrus
      flavored energy drinks. 
----------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {

int energyDrinkers = 16500 * .15;
int citrusDrinkers = energyDrinkers * .52;

cout << "\n---------------------------------------------------------------\n";
cout << "The number of customers who drink engery drinks is " << energyDrinkers << ".\n";
cout << "The number that purchase citrus flavor is " << citrusDrinkers << ".\n";
cout << "---------------------------------------------------------------\n";
cout << "\n***End Program***\n";


    return 0;
}
