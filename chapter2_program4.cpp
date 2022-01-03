/* 
Dillon Flehaty
Program #4
Restaurant Bill
Write a program that compautes the tax and tip on a restaurant bill for a patron 
with a $44.500 meal charge. The tax should be 6.75 percent of the meal cost. The 
tip should be 15 percent of the total after adding the tax. Display the meal cost, tax amount, 
tip amount, and total bill on the screen.
*/ 

// Initiate preprocessor directive
#include <iostream>

using namespace std;

int main (){

    cout << "\n--------------------------------------------\n";

    // initiate variable for meal 
    double meal;
    
    // Have user input the cost of the meal
    cout << "\nPlease input total meal charge: ";
    cin >> meal;

    // Calculate the tax, tip and total of the users input
    double tax = .067 * meal;
    double tip = (meal + tax) * .15;
    double total = (meal + tip + tax);

    // Display totals of meal, tax, tip, and total cost
    cout << "--------------------------------------------\n";
    cout << "The cost of the meal is $" << meal << "\n";
    cout << "Tax on meal is: $" << tax << "\n";
    cout << "The tip amount is: $" << tip << "\n";
    cout << "The total amount due is: $" << total << "\n";
    cout << "---------------------------------------------\n";

    cout << "End Program\n";

    return 0;
    
}

