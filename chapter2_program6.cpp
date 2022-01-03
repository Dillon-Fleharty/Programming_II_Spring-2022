/*
Dillon Fleharty
Chapter 2 - Program #6
Distance per Tank of Gas
A car with a 20 gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town and 
when driven on the highway. 
*/

#include<iostream>
using namespace std;

int main(){

cout << "\n--------------------------------------------------------------------------\n";

double distanceTown = 20 * 23.5;
double distanceHighway = 20 * 28.9;

cout << "The car can drive " << distanceTown << " miles while driving in town.\n";
cout << "The car can drive " << distanceHighway << " miles while driving on the highway.\n";

cout << "--------------------------------------------------------------------------\n";
cout << "\nEnd Program\n";

return 0;
}
