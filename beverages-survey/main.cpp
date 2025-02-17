//
// Carmen Grajeda
// 2/12/2025
// Beverages Survey Programming Project
// COSC 1030
//

/* This program performs a survey tally 
on beverages, each person participating
in the survey should choose their favorite 
beverage from the list. */

#include <iostream>
#include <iomanip> 
using namespace std;


int main()
{
    // Constants for beverage choices
    const int COFFEE_CHOICE = 1,
              TEA_CHOICE = 2,
              COKE_CHOICE = 3,
              ORANGE_JUICE_CHOICE = 4,
              SENTINEL = -1;


    // Variables 
    int choice; // Menu choice
    int coffeeCount = 0, teaCount = 0, cokeCount = 0, orangeJuiceCount = 0;

    // Set up formatting 
    cout << fixed << showpoint;

    // Loop to process choices until sentinel value is entered
    cout << "Enter -1 to terminate the survey.\n";
    do
    { 
        // Display the beverage choices
        cout << "Choose your favorite beverage from the following list\n\n"
             << "1. Coffee\n"
             << "2. Tea\n"
             << "3. Coke\n"
             << "4. Orange Juice\n"
             << "Enter -1 to quit\n\n"
             << "Enter your choice: ";
        cin >> choice;

        // Validate the beverage selection.
        while (choice != SENTINEL && (choice < COFFEE_CHOICE || choice > ORANGE_JUICE_CHOICE))
        {
            cout << "Please enter a valid Beverage choice (1-4) or -1 to quit: ";
            cin >> choice;
        }

        // Count the votes based off user's choice
        switch (choice)
        {
            case COFFEE_CHOICE:
                coffeeCount++;
                break;
            case TEA_CHOICE:
                teaCount++;
                break;
            case COKE_CHOICE:
                cokeCount++;
                break;
            case ORANGE_JUICE_CHOICE:
                orangeJuiceCount++;
                break;
        }
    } 
    while (choice != SENTINEL);

    // Display the survery results
    cout << "\nHere are the results:\n";
    cout << "Coffee: " << coffeeCount << " votes\n";
    cout << "Tea: " << teaCount << " votes\n";
    cout << "Coke: " << cokeCount << " votes\n";
    cout << "Orange Juice: " << orangeJuiceCount << " votes\n";
    cout << "Thank you for participating in our Survey!\n";

    return 0;
            
}