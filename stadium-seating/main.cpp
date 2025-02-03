//
// Carmen Grajeda
// 2/3/2025
// Stadium Seating Programming Project
// COSC 1030
//

/* This program asks how many tickets for each class
were sold, then displays the amount of income 
generated from ticket sales.*/

#include <iostream>
#include <iomanip> // Header for set precision manipulator
using namespace std;

int main()
{
// Constant variables
const double CLASS_A_PRICE = 15.0; // Cost of class A seats
const double CLASS_B_PRICE = 12.0; // Cost of class B seats
const double CLASS_C_PRICE = 9.0; // Cost of class C seats

// Variables 
int classATickets; // Number of class A tickets sold
int classBTickets; // Number of class B tickets sold
int classCTickets; // Number of class C tickets sold
double total; // Total revenue from ticket sales

// Read the number of Class A tickets sold
cout<< "Enter the number of tickets Class A sold: ";
cin>> classATickets;

// Read the number of Class B tickets sold.
cout<< "Enter the number of tickets Class B sold: ";
cin>> classBTickets;

// Read the number of Class C tickets sold.
cout<< "Enter the number of tickets Class C sold: ";
cin>> classCTickets;

// Calculate the total revenue
total = (classATickets * CLASS_A_PRICE) +
        (classBTickets * CLASS_B_PRICE) +
        (classCTickets * CLASS_C_PRICE);

// Display the total revenue.
cout << "The total revenue from ticket sales is $ "
     << setprecision(2) << fixed << total << endl;

return 0;
}


