//
// Carmen Grajeda
// 04/24/2025
// Dental Bill Programming Project
// COSC 1030
//

// Dental Bill Program

#include <iostream>

using namespace std;

// Functions
double calculateBill(double, double); // Members
double calculateBill(double, double, double); // Non-members

int main()

{
   // Variables 
   char member; // If they are a member or not 
   double serviceCharge,
          testFees,
          medicineFees = 0.0, // Start at 0 in case they are a member
          totalBill;

    // Ask user if they are a member or not 
    cout << "Welcome!\n";
    cout << "Are you a member of our Dental plan? (y/n): ";
    cin >> member;

    // Get the service charge amount 
    cout << "Enter Service Charge: $";
    cin >> serviceCharge;

    // Get the test fee charge amount 
    cout << "Enter Test Fees: $";
    cin >> testFees;

    // Validate the user input 
    if (member == 'y' || member == 'Y')
    {
        // Calculate members total bill
        totalBill = calculateBill(serviceCharge, testFees);
    }
    else
    {
        // If not a member ask for medicine amount
        cout << "Enter Medicine Fees: $";
        cin >> medicineFees;

        // Calculate non members total bill
        totalBill = calculateBill(serviceCharge, testFees, medicineFees);
    }

    // Display total bill 
    cout << "\n______ DENTIST BILL ______\n";
    cout << "Service Charge: $" << serviceCharge << endl;
    cout << "Test Fees: $" << testFees << endl;

    // If non member display medicine fees
    if (!(member == 'y' || member == 'Y'))
    {
        cout << "Medicine Fees: $" << medicineFees << endl;
    }

    cout << "______ TOTAL BILL ______: $" << totalBill << endl;
    
    return 0;
    
}

// Function for members of the dentist 
double calculateBill(double serviceCharge, double testFees)
{
    // add the service and test fees together
    return serviceCharge + testFees;
}

// Function that is overloaded for non-members of the dentist
double calculateBill(double serviceCharge, double testFees, double medicineFees)
{
    // add the service, test fees, and medicine together
    return serviceCharge + testFees + medicineFees;
}