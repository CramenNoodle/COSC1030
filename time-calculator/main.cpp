//
// Carmen Grajeda
// 2/10/2025
// Time Calculator Programming Project
// COSC 1030
//

// Time Calculator

#include <iostream>
using namespace std;

// Constants
const double SEC_PER_MINUTE = 60.0; // Seconds in a minute
const double SEC_PER_HOUR = 3600.0; // Seconds in an hour
const double SEC_PER_DAY = 86400.0; // Seconds in a day

int main()
{
    // Variables 
    int seconds; // Variable to hold the amount of seconds
    double minutes, hours, days; // Variables for times 

    // Get the number of seconds
    cout <<"Enter a number of seconds: ";
    cin>> seconds;

    // If statment to determine number of minutes in that many seconds 
    if(seconds >= SEC_PER_MINUTE)
    {
        minutes = seconds / SEC_PER_MINUTE; 
        cout << "There are " << minutes
        << " minutes in " << seconds
        << " seconds.\n";
    }

    // If statement to determine the numbers of hours in that many seconds
    if(seconds >= SEC_PER_HOUR)
    {
        hours = seconds / SEC_PER_HOUR;
        cout << "There are " << hours
        << " hours in " << seconds
        << " seconds.\n";
    }

    // If statement to determine the number of days in that many seconds
    if(seconds >= SEC_PER_DAY)
    {
        days = seconds / SEC_PER_DAY;
        cout << "There are " << days
        << " days in " << seconds
        << " seconds.\n";
    }

    return 0;
}



