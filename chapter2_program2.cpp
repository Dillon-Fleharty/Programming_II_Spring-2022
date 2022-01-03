/* Dillon Fleharty
   Chapter 2 - Programming Question #2 
   Create a program that will take the purschase 
   price of a product and calculate the sales 
   tax. Display the purshcase price, sales tax,
   and total amount of both.*/

// Prepros directive for iostream
#include<iostream>

//use std to avoid typing it on every line
using namespace std;

// This is the main function
int main() {

// declare the varible for purchase that will be the user input
double purchase; 

// Ask user to input their purchase amount
cout << "\nThis is a sales tax program to display\n";
cout << "your purschase price and sales tax\n";
cout << "=====================================\n";
cout << "Enter the amount of your purchase: ";
cin >> purchase;

// Calc the tax and purschase price
double taxRate = .085;
double totalTax = taxRate * purchase;
double total = purchase + totalTax; 

// Display the results
cout << "-------------------------------------\n";
cout << "Purchase price is $" << purchase <<"\n";
cout << "The total tax is $" << totalTax << "\n\n";
cout << "The total for both is $" << total << "\n\n";

    return 0;
}