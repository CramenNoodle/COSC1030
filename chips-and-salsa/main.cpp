//
// Carmen Grajeda
// 03/27/2025
// Chips and Salsa Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototypes
void getSales(string[], int[], int);
int total(int[], int);
int largestElement(int[], int);
int smallestElement(int[], int);

int main()
{
    //Constant for the amount of salsa
    const int SALSA_TYPES = 5; 

    // Array of salsa types
    string names[SALSA_TYPES] = {"mild", "medium", "sweet",
                                    "hot", "zesty"};

    // Array of sales of each salsa type 
    int sales[SALSA_TYPES];

    // The total number of jars sold
    int totalJarsSold;

    // Subscript of the salsa that sold the highest
    int highestSold;

    // Subscript of the salsa that sold the least
    int leastSold;

    // Get the number of jars sold of each type of salsa
    getSales(names, sales, SALSA_TYPES);

    // Get the total sales and high and low selling products
    totalJarsSold = total(sales, SALSA_TYPES);
    highestSold = largestElement(sales, SALSA_TYPES);
    leastSold = smallestElement(sales, SALSA_TYPES);

    // Display the sales report header
    cout << endl << endl;
    cout << "     Salsa Sales Report \n\n";
    cout << "Name              Jars Sold \n";
    cout << "____________________________\n";

    // Display the name and jars sold of each type
    for (int salsaType= 0; salsaType < SALSA_TYPES; salsaType++)
    {
        cout << setw(6) << names[salsaType]
             << setw(21) << sales[salsaType]
             << endl;
             
    }
    
    // Display the total sales, highest seller, and lowest seller.
    cout << "\nTotal Sales: " << setw(15) << totalJarsSold << endl;
    cout << "High Seller: " << names[highestSold] << endl;
    cout << "Low Seller: " << names[leastSold] << endl;

    return 0;
}

/*      getSales
Gets the number of jars of each salsa type sold from 
the user. The names array parameter holds the names of 
the salsas, and the sales array parameter will hold
the numbers sold of each correspoinding type of salsa*/
void getSales(string names[], int sales[], int size)
{
    for (int type = 0; type < size; type++)
    {
        // Get the number of jars sold
        cout << "How many jars of " << names[type]
             << " salsa did we sell last month?";
        cin >> sales[type];

        // Validate the input
        while (sales[type]<0)
        {
            cout << "Jars sold must be 0 or more. Please re-enter: ";
            cin >> sales[type];
        }
    }
}
/* 
total 
- Calculates and returns the total of the values stored in
the array passed to the function.
*/
int total(int array[], int size)
{
    int total = 0;

    for (int pos = 0; pos < size; pos++)
        total += array[pos];
    
    return total;
}

/* 
largestElement
- Finds and returns the subscript of the array position 
holding the largest value in the array passed to the 
function.
*/
int largestElement(int array[], int size)
{
    int indexOfLargest = 0; 

    for (int pos = 1; pos < size; pos++)
    {
        if (array[pos] > array[indexOfLargest])
            indexOfLargest = pos;
    }
    return indexOfLargest;
}
/*
smallestElement
- Finds and returns the subscript of the array position
holding the smallest value in the array passed to the
function.
*/
int smallestElement(int array[], int size)
{
    int indexOfSmallest = 0;

    for (int pos = 1; pos < size; pos++)
    {
        if (array[pos] < array[indexOfSmallest])
            indexOfSmallest = pos;
    }
    return indexOfSmallest;
}
