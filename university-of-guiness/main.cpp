//
// Carmen Grajeda
// 2/10/2025
// University of Guiness Programming Project
// COSC 1030
//

// University of Guiness residential status
#include <iostream>
#include <iomanip> // Header for the stream manipulator
using namespace std;

// Constants
const double IN_STATE_TUITION = 3000.0; // Tuition for in-state students
const double OUT_STATE_TUITION = 4500.0; // Tuition for out-state students 
const double IN_STATE_ROOM_AND_BOARD = 2500.0; // Room and board costs for in-state students
const double OUT_STATE_ROOM_AND_BOARD = 3500.0; // Room and board costs for out-state students

int main()
{
    // Variables 
    char state; // Variable to hard the users in state or out of state answer
    char roomAndBoard; // Variable to hold ysers input if student requires room and board
    double roomAndBoardCost = 0.0; // Variable for the users room and board costs 
    double totalBill = 0.0; // Variable for the users costs

    // Get the user's residency status
    cout << "Enter 'I' if you are an in-state student "
    << "or 'O' if you are an out-state student.\n";
    cin >> state;

    // Determine the costs by the users input 
    if (state == 'I' || state == 'i')
    {
        totalBill = IN_STATE_TUITION;
        roomAndBoardCost = IN_STATE_ROOM_AND_BOARD;
    }
    else if(state == 'O' || state == 'o')
    {
        totalBill = OUT_STATE_TUITION;
        roomAndBoardCost = OUT_STATE_ROOM_AND_BOARD;
    }
    else
    {
        cout<< "Invalid input. Please enter 'I' or 'O'.\n"; // If there is an error
        return 1; // Close the program with invalid input
    }

    // Get the user's room and board requirement 
    cout<< "Enter 'Y' if you need room and board "
    << "or 'N' if you do not need room and board.\n";
    cin>> roomAndBoard;

    // Determine costs of room and board by users input
    if(roomAndBoard == 'Y' || roomAndBoard == 'y')
    {
        totalBill += roomAndBoardCost; // Calculate room and board cost to total
    }
    else if (roomAndBoard == 'N' || roomAndBoard == 'n')
    {
        // Ignore because there isn't an extra charge added.
    }
    else
    {
        cout<< "Invalid input. Please enter 'Y' or 'N'.\n"; // if there is an error
        return 1; // Close the program if there is invalid input
    }

    // Display the students total cost
    cout << "The total cost per semester is: $ "
    << setprecision(2) << fixed << totalBill << endl;

    // Welcome message 
    cout << "We look forward to having you at the University of Guiness!\n" << endl;
    
    return 0;
        
}