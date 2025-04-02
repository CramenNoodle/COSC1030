//
// Carmen Grajeda
// 04/2/2025
// Search Benchmarks Programming Project
// COSC 1030
//

// Search benchmarks program

#include <iostream>

using namespace std;

// Function prototypes
int linearSearch(int arr[], int SIZE, int target, int &comparisonCount);
int binarySearch(int arr[], int SIZE, int target, int &comparisonCount);


int main()
{
    const int SIZE = 20; // The size of the array.
    int myArray[SIZE]; // Declare the array with 20 integers.
    int target,          // Variable for the target.
        comparisonCount; // Variable for the comparison count.

    // Initialize the array with values
    for (int i =0; i < SIZE; i++)
    {
        myArray[i] = i + 1; // Fill the array with values 1-20
    }

    // Get the value 
    cout << "Enter a value to search for 1-20: ";
    cin >> target;

    // input validation 
    if (target < 1 || target > 20)
    {
        cout << "Invalid input please enter a number 1-20.\n";
        return 1;
    }

    // Call the linearSearch function
    comparisonCount = 0; // Reset comparison count before search
    int linearResult = linearSearch(myArray, SIZE, target, comparisonCount);
    {
        if(linearResult != -1)
        {
            cout << "Linear Search: The Value was found at index " << linearResult << endl;
        }
        else 
        {
            cout << "Linear Search: The Value was not found.\n";
        }
        cout << "Linear Search Comparisons:  " << comparisonCount << endl;
        

        // Call the Binary search function.
        comparisonCount = 0; // Reset comparison count before the search
        int binaryResult = binarySearch(myArray, SIZE, target, comparisonCount);
        {
            if (binaryResult != -1)
            {
                cout <<"Binary Search: Value was found at index " << binaryResult << endl;
            }
            else
            {
                cout << "Binary Search: Value was not found.\n";                cout << "The number comparison made: " << comparisonCount << endl;
            }
        }
        cout << "Binary Search Comparisons: " << comparisonCount << endl;
        
        return 0;
    }


}
// Linear Search Function
int linearSearch(int arr[], int size, int target, int &comparisonCount)
{
    // Initialize the comparison count
    for (int i = 0; i < size; i++)
    {
        comparisonCount++; // Increment count.
        if (arr[i] == target) // Compare the current element with the target.
        {
            return i; // Return the index if the value is found. 
        }
    }
    return -1; // Return -1 if the value is not found.
}

// The binary search function 
int binarySearch(int arr[], int size, int target, int &comparisonCount)
{
    int low = 0; // Starting index
    int high = size -1; // Endign index
    comparisonCount = 0; // initialize the comparison count

    while (low <= high)
    {
        comparisonCount++; // Increment the counter for each comparison 

        int mid = (low + high) / 2; // Calculate the middle index

        if (arr[mid] == target) // Check if the middle element matches the target
        { 
             return mid; // Return if the index is found.
        }
        else if (arr[mid] < target) // If the target is greater search right
        {
            low = mid + 1; // Move right
        }
        else // If the target is smaller search the left
        {
            high = mid -1; // Move left
        }
    }
    return -1; // Return -1 if the target is not found
}