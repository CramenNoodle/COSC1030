//
// Carmen Grajeda
// 1/26/2025
// Restaurant Bill Programming Project
// COSC 1030
//

// Variable declarations
double meal = 88.67; // Variable for customers meal cost
double subtotal = 0; // Variable for tax and meal combined
double total = 0; // Variable for the total of tax and tip added

// Constants for the tax rate and tip percentage
double TAX = 0.0675; // Variable for percentage of tax 
double TIP = 0.20; // Variable for percentage of tip

#include <iostream>
using namespace std;

int main()
{   
    // Get the amount of the purchase
    double meal = 88.67; // Variable for customers meal cost
    
    // Calculate sales tax
    double TAX = meal * 0.0675; // Variable for customers meal amount with tax

    // Calculate sales tax and meal total
    double subtotal = meal + TAX; // Variable for meal and tax total
    
    // Calculate the tip
    double tip = subtotal * 0.20; // Variable for total cost plus tip
    
    // Calculate the total of the sale 
    double total = subtotal + tip; // Variable for total bill

    // Print information about the sale.
    cout << "Meal Cost: " << meal << endl;
    cout << "Tax Amount: " << TAX << endl;
    cout << "Tip Amount: " << TIP << endl;
    cout << "Total Bill: " << total << endl;

    return 0;

}

