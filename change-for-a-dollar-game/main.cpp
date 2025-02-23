//
// Carmen Grajeda
// 02/23/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//

// Change for a dollar game. 

#include <iostream>

using namespace std;

// Constants for the coin values 

const int PENNY_VALUE = 1;
const int NICKEL_VALUE = 5;
const int DIME_VALUE = 10;
const int QUARTER_VALUE = 25;
const int DOLLAR_VALUE = 100; 

int main()
{
    // Variables
    int pennies, nickels, dimes, quarters; // Variable to store users input 
    int totalValue; // Variable for the total.

    // Get user input 
    cout << "Welcome to the Change-Counting Game!\n"
         << "Enter the exact amount of coins to equal a dollar to win.\n";

    cout << "Enter the number of pennies: ";
    cin >> pennies;

    cout << "Enter the number of nickels: ";
    cin >> nickels;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value 
    totalValue = ( pennies * PENNY_VALUE) + (nickels * NICKEL_VALUE) +
                 ( dimes * DIME_VALUE ) + ( quarters * QUARTER_VALUE);

    // Display the total amount.
    cout << "Total amount: " << totalValue << " cents" << endl;

    // Determine if the total is exactly a dollar bill and display the result.
    if (totalValue == DOLLAR_VALUE)
    {
        cout << "You entered exactly a dollar. Congradulations, You won!\n";
    }
    else if (totalValue > DOLLAR_VALUE)
    {
        cout << "You entered too many coins. Try again!\n";
    }
    else 
    {
        cout << "You did not enter enough coins. Try again!\n";
    }

    return 0;
      
}


