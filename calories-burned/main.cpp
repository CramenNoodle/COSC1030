//
// Carmen Grajeda
// 2/17/2025
// Calories Burned Programming Project
// COSC 1030
//

/* This program uses a loop to display
the number of calories burned after
5,10,15,20,25, and 30 minutes*/

#include <iostream>
using namespace std;

int main()
{
    // Constant for the calories per minute
    const double CALS_PER_MINUTE = 3.9;

    int minutes; // Number of minutes
    double calories; // Calories burned 

    // for loop to initialize and perform the calculation 
    for (minutes = 5; minutes <= 30; minutes += 5)
    {
        calories = minutes * CALS_PER_MINUTE;
        cout << "After " << minutes << " minutes you burned "
             << calories << " calories.\n";
    }

    return 0;
}


