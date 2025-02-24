//
// Carmen Grajeda
// 02/24/2025
// Hotel Occupancy Programming Project
// COSC 1030
//

// Hotel occupancy

#include <iostream>

#include <iomanip> 

using namespace std;

int main()
{
    // Variables
    int numberFloors, numberRooms, occupiedRooms; // To hold the number of floors, rooms, and occupied rooms.
    int totalRooms = 0, totalOccupied = 0, totalUnoccupied; // Accumulator 
    double occupancyRate;
    

    // Get the amount of floors 
    cout << "Enter the number of floors: ";
    cin >> numberFloors;

    // Validate the input.
    while (numberFloors < 1)
    {   
        // Explain the error
        cout << "Error: Enter a number higher than 1.\n";
        cout << "Enter the number of floors: ";
        cin >> numberFloors;
    }

    // loop through each floor  
    for ( int floor = 1; floor <= numberFloors; floor++)
    {
        if (floor == 13)
        {
            // Skip floor 13 because it doesnt exist 
            cout << "Skipping floor 13.\n";
            continue;
        }

        // Get the number of rooms
        cout << "Enter the number of rooms on the floor " << floor << ": ";
        cin >> numberRooms;

        // Validate the input
       while (numberRooms < 10)
       {
        // explain the error 
        cout << "Invalid Input. Enter at least 10 rooms.\n";
        cout << "Enter the number of rooms on the floor " << floor << ": ";
        cin >> numberRooms;
       }

       // Get the number of occupied rooms
        cout << "Enter the number of occupied rooms: ";
        cin >> occupiedRooms; 

       // Validate the input 
        while ( occupiedRooms < 0 || occupiedRooms > numberRooms)
        {
            // Explain the error
            cout << "Invalid input. Occupied rooms must be higher than 0.\n";
            cout << "Enter the number of occupied rooms " << floor << ": ";
            cin >> occupiedRooms;
        }
        // calculate the total rooms on each floor
        totalRooms += numberRooms;
        // Calculate the total rooms that are occupied 
        totalOccupied += occupiedRooms;

    }
    // calculate the unoccupied rooms 
    totalUnoccupied = totalRooms - totalOccupied;

    // calculate the percentage of occupancy rate
    occupancyRate = (static_cast<double> (totalOccupied)/totalRooms) * 100;

    // Display the hotel results 
    cout << "\nHotel Occupancy" << endl;
    cout << "Total rooms: " << totalRooms << endl;
    cout << "Occupied rooms: " << totalOccupied << endl;
    cout << "Unoccupied rooms: " << totalUnoccupied << endl;
    cout << fixed << setprecision(2);
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;
    
    return 0;
}

