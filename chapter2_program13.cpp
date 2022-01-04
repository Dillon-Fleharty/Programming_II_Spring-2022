/*
Dillon Fleharty
Chapter 2 - Program 13
COSC 1337 Spring 2022
-----------------------------------------------------------------------
Pay Period Gross Pay
A particular employee earns $39,000 annually. Write a program
that determines and displays what the amount of his gross pay will
be for each pay period if he is paid twice a month (24 paychecks/year)
and if he is paid bi-weekly (26 paycheck per year)
-----------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

int main() {

    int salary = 39000;
    int biMonthly = salary / 24;
    int biWeekly = salary / 26;

    cout << "\n---------------------------------------\n";
    cout << "Twice monthly checks are $" << biMonthly << ".\n";
    cout << "Bi-weekly checks are $" << biWeekly << ".\n";
    cout << "---------------------------------------\n";
    cout << "\n***End Program***\n\n";

    return 0;
   
}
