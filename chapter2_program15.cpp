/*
Dillon Fleharty
Chapter 2 - Program 15
Video Game Levels
---------------------------------------------------------------------------------------------------------------
a novice player needed 78 minutes to complete level 1 and 144 minutes to complete level 2 of a new video game.
Write a program that computes and displays in hours and minutes the amount of time each level took and that 
tells how much longer it took the play to complete Level 2 than level 1.
---------------------------------------------------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main() {


int levelOneHours = 78 / 60;
int levelOneMinutes = 78 % 60;

int levelTwoHours = 144 / 60;
int levelTwominutes = 144 % 60;

int differenceHours = (144/78);
int differenceMins = (144-78) % 60; 


cout << "\n\n-----------------------------------------------------------------------------------\n";
cout << "Level One took the player " << levelOneHours << " hour and " << levelOneMinutes << " minutes to complete.\n";
cout << "Level Two took the player " << levelTwoHours << " hours and " << levelTwominutes << " minutes to complete.\n";
cout << "The difference in time was " << differenceHours << " hours and " << differenceMins << " minutes.\n";
cout << "-----------------------------------------------------------------------------------\n";


    return 0;
}
