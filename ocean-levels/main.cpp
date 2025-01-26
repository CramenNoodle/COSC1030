//
// Carmen Grajeda
// 1/26/2025
// Ocean Levels Programming Project
// COSC 1030
//

// This program calculates how many millimeters the ocean will rise in 5,7, and 10 years.

// Variables 
double total5yrs = 0; // Variable for total rising in 5 years. 
double total7yrs = 0; // Variable for total rising in 7 years.
double total10yrs = 0; // Variable for total rising in 10 years.

// Constant Variables 
double levelsHigher5 = 5; // Ocean levels in 5 years
double levelsHigher7 = 7; // Ocean levels in 7 years
double levelsHigher10 = 10; // Ocean levels in 10 years
double OCEAN_LEVELS_PER_YEAR = 1.5; //amount of millimeters rising ocean level per year

# include <iostream>
using namespace std;

int main()
{
    // Get amount of millimeters per year
    double OCEAN_LEVELS_PER_YEAR = 1.5;

    // Calculate amount of millimeters risen in 5 years
    double total5yrs = OCEAN_LEVELS_PER_YEAR * 5;

    //Calculate amount of millimeters risen in 7 years
    double total7yrs = OCEAN_LEVELS_PER_YEAR * 7;

    // Calculate amount of millimeters risen in 10 years
    double total10yrs = OCEAN_LEVELS_PER_YEAR * 10;

    // Display total millimeters risen 
    cout << "In 5 years the ocean level will be " << total5yrs << " mm higher than current levels." << endl;
    cout << "In 7 years the ocean level will be " << total7yrs << " mm higher than current levels." << endl;
    cout << "In 10 years the ocean level will be " << total10yrs << " mm higher than current levels." << endl;

    return 0;

}


