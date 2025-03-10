//
// Carmen Grajeda
// 03/10/2025
// Markup Programming Project
// COSC 1030
//

/* This program asks the user to enter an item's 
wholesale cost and it's markup percentage.
Then it will display the retail price.*/

#include <iostream>

#include <iomanip>

using namespace std;

// Prototype
double calculateRetail(double, double);

int main()
{
    double wholesale; // Variable for the wholesale cost
    double markupPercent; // Variable for the markup percentage
    double retail; // Variable for the retail price

    // Get the item's wholesale cost.
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesale;

    // Validate the wholesale cost.
    while (wholesale < 0)
    {
        cout << "Enter a non-negative value: ";
        cin >> wholesale;
    }

    // Get the item's markup percentage.
    cout <<  "Enter the item's markup percentage: ";
    cin >> markupPercent;

    // Validate the markup percentage
    while (markupPercent < 0 )
    {
        cout << "Enter a non-negative value: ";
        cin >> markupPercent;
    }

    // Get the item's retail price.
    retail = calculateRetail(wholesale, markupPercent);

    // Display the retail price.
    cout << "The retail price is $" << setprecision(2)
         << fixed << retail << endl;
         
    return 0;
}

/* 
The calculateRetail function accepts an item's wholesale cost
and markup percentage as arguments, and returns the items
retail price. */

double calculateRetail(double wholesale, double markupPercent)
{
    double markup = wholesale * markupPercent / 100;
    return wholesale + markup;
}
