//
// Carmen Grajeda
// 03/26/2025
// Temperatures
// COSC 1030
//

// Temperature Program

#include <iostream>
#include <iomanip>
using namespace std;

// Use "Typedef" to define an array type for temperatures
typedef double TemperatureArray[50];
// Function Prototypes
void getTemperatures(TemperatureArray, int);
double getAverage(const TemperatureArray, int);
double getHighestTemp(const TemperatureArray, int);
double getLowestTemp(const TemperatureArray, int);

int main()
{
    // Variables
    TemperatureArray dailyTemp; // Array to store temperatures
    int numTemps; // Variable for the number of temperatures 
    double average, highestTemp, lowestTemp; // Variables for the average, highest, and lowest temperature 

    // Ask the user how many temperatures they want to enter 
    cout << "Enter the number of temperatures (max 50): ";
    cin >> numTemps;

    // Valiable input 
    while (numTemps < 1 || numTemps > 50)
    {
        cout << "Invalid input. Please enter a number from 1 - 50: ";
        cin >> numTemps;
    }

    // Get the temperature from the user
    getTemperatures(dailyTemp, numTemps);

    // Get the average, highest, and lowest of the temperature
    average = getAverage(dailyTemp, numTemps);
    highestTemp = getHighestTemp(dailyTemp, numTemps);
    lowestTemp = getLowestTemp(dailyTemp, numTemps);

    // Display the average, highest, and lowest temperatures with two decimal points.
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe average temperature is: " << average << ".\n";
    cout << "The highest temperature was: " << highestTemp << ".\n";
    cout << "The lowest temperature was: " << lowestTemp << ".\n";

    return 0;

}

/*          getTemperatures
This function asks the user to enter temperatures and stores them in an array
*/
void getTemperatures(TemperatureArray dailyTemp, int numTemps)
{
    for(int index = 0; index < numTemps; index++)
    {
        cout << "Enter the Temperature " << (index + 1) << ": ";
        cin >> dailyTemp[index];
    }
}

/*            getAverage
This function calculates and returns the average of all the temperatures
*/
double getAverage(const TemperatureArray dailyTemp, int numTemps)
{
    double total = 0; // Accumulator

    // Add each element to total.
    for(int count = 0; count < numTemps; count++)
    {
        total += dailyTemp[count];
    }

    return total / numTemps;
}

/*      getHighestTemp
This function returns the highest temperature in the array*/
double getHighestTemp(const TemperatureArray dailyTemp, int numTemps)
{
    double highest = dailyTemp[0];
    for (int count = 1; count < numTemps; count++)
    {
        if (dailyTemp[count] > highest)
        {
            highest = dailyTemp[count];
        }
    }
    return highest;
}

/*         getLowestTemp
This function returns the lowest temperature in the array*/
double getLowestTemp(const TemperatureArray dailyTemp, int numTemps)
{
    double lowest = dailyTemp[0];
    for (int count = 1; count < numTemps; count++)
    {
        if (dailyTemp[count] < lowest)
        {
            lowest = dailyTemp[count];
        }
    }
    return lowest;
}