//
// Carmen Grajeda
// 04/2/2025
// Integer Array
// COSC 1030
//

// Integer Array Program 

#include <iostream>

#include <iomanip>

using namespace std;

// Function prototypes
void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int size, int target);
double calculateMean(int arr[], int size);
void displayArray(int arr[], int size);

int main()
{
    const int MAX_SIZE = 50; // The maximum size of the array
    int arr[MAX_SIZE];
    int size,
        target;

    // Get the number of elements
    cout << "Enter the number of elements no more than 50: ";
    cin >> size;

    // Validate the input size
    if (size <= 0 || size > MAX_SIZE)
    {
        cout << "Invalid size please enter a number between 1 and 50.\n";
        return 1; 
    }

    // Get array element 
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Get the integer
    cout << "Enter the number to search for: ";
    cin >> target;

    // Display original array
    cout << "\nArray as entered: ";
    displayArray(arr, size);

    // Sort the array before searching 
    bubbleSort(arr, size);

    // Display sorted array
    cout << "Sourted array: ";
    displayArray(arr, size);

    // Perform a binary search
    int result = binarySearch(arr, size, target);

    // Display the search results
    if (result != -1)
    {
        cout << "The number " << target << " was found at the index " << result << ".\n";
    }
    else 
    {
        cout << "The number " << target << " was not found in the array.\n";
    }

    // Calculate and display the mean 
    double mean = calculateMean(arr, size);
    cout << "Mean of the data set: " << fixed << setprecision(2) << mean << "\n";

    return 0;
}

/*The bubble sort function 
This function sorts the array in ascending order */ 
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) // Loop through the array multiple times
    {
        for (int j = 0; j < size - i - 1; j++) // Compare adjacent elements
        {
            if(arr[j] > arr[j + 1]);
            {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j + 1] = temp;
            }
        }
    }
}

/* The binarySearch function
This function searches for the target value in a sorted array 
*/ 

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1; // Initialize the search boundaries
    while (low <= high)
    {
        int mid = (low + high) /2; // Find the middle index

        if (arr[mid] == target)
        {
            return mid; // If the target is found return the index
        }
        else if(arr[mid] < target)
        {
            low = mid + 1; // If the target is greater, ignore the left
        }
        else
        {
            high = mid -1; // If the target is smaller, ignore right 
        }
         
    }
    return -1; // return is the target isnt found
}

// The function to calculate the mean of the dataset
double calculateMean(int arr[], int size)
{
    int sum = 0; 
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // Sum up all the elements
    }
    return static_cast<double>(sum) / size; // Compute the mean as a double 
}

/* The function to display the array contents
This function prints each element in the array separated by spaces*/

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}