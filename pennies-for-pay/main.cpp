//
// Carmen Grajeda
// 02/23/2025
// Pennies for Pay Programming Project
// COSC 1030
//

//Pennies for pay 

#include <iostream>

#include <iomanip> // Header for stream manipulator

using namespace std;

int main()
{

    // Variables

    int numberDays; // Number of days
    double salary = 0.01; // The starting salary. 
    double totalPay = 0.0; // Accumulator, The total pay at the end of the period.
    

    // Ask the user for the number of days
    cout <<"Enter the number of days: ";
    cin >> numberDays;

    // Validate the input. 
    while (numberDays < 1)
    {
        // Explain the error
        cout <<"Invalid input. Please enter more than 1 number of days: ";
        cin >> numberDays;
    
    }

    // Display a table 
    cout << "\nDay\tSalary ($)" << endl;
    cout << "-------------\n" << endl;
    
    // Calculate the daily salary and total pay
    for ( int count = 1; count <= numberDays; count++)
    {
        // Display the day and salary
        cout << count << "\t" << fixed << setprecision(2) << salary << endl;

        // Calculate days salary
        totalPay += salary;

        // Calculate the pay for the next day
        salary *= 2;

    }

    // Display the total
    cout <<"\nThe total pay after " << numberDays << " days: $" << fixed << setprecision(2) << totalPay << endl;

    return 0;

}


