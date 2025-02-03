//
// Carmen Grajeda
// 2/3/2025
// Woody Furniture Company Programming Project
// COSC 1030
//

/* This program will input the amount of chairs sold
for each style, and print the total dollar sales for
each style, as well the total sales of all chairs.*/

// Constant Variables
const double AMERICAN_COLONIAL_PRICE = 85.0; // Price of American Colonial chairs
const double MODERN_PRICE = 57.50; // Price of the Modern chairs
const double FRENCH_CLASSICAL_PRICE = 127.75; // Price of the French Classical chairs

// Variables 
int americanColonialAmount; // American Colonical amount of chairs sold
int modernAmount; // Modern amount of chairs sold
int frenchClassicalAmount; // French Classical amount of chairs sold
double americanColonialTotal; // Amount of total American colonial sold
double modernTotal; // Amount of total modern sold 
double frenchClassicalTotal; // Amount of total french classical sold
double total; // Amount of all chairs sold.

#include <iostream>
#include <iomanip> // Header for the stream manipulator
using namespace std;

int main()
{

    // Read the amount of American Colonial sold
    cout<< "Enter the amount of American Colonial style chairs sold: ";
    cin>> americanColonialAmount;

    // Calculate the amount sold 
    double americanColonialTotal = americanColonialAmount * AMERICAN_COLONIAL_PRICE;

    // Display the total
    cout<<"The total amount of American Colonial Style chairs sold is $"
    << setprecision(2) << fixed << americanColonialTotal << endl;

    // Read the amount of Modern sold
    cout<< "Enter the amount of Modern style chairs sold: ";
    cin>> modernAmount;

    // Calculate the total
    double modernTotal = modernAmount * MODERN_PRICE;

    // Display the total of modern
    cout<< "The total amount of Modern Style chairs sold is $"
    << setprecision(2) << fixed << modernTotal << endl;

    // Read the amount of French classical sold
    cout<< "Enter the amount of French Classical chairs sold: ";
    cin>> frenchClassicalAmount;

    // Calculate the total 
    double frenchClassicalTotal = frenchClassicalAmount * FRENCH_CLASSICAL_PRICE;

    // Display the total of French classical 
    cout<< "The total amount of Modern Style chairs sold is $"
    << setprecision(2) << fixed << frenchClassicalTotal << endl;

    // Calculate the total sales of all the chairs 
    total = (americanColonialTotal + modernTotal + frenchClassicalTotal);

    // Display the total sales
    cout <<"The total amount of chairs sold is $"
    << setprecision(2) << fixed << total << endl;

    return 0;

}

