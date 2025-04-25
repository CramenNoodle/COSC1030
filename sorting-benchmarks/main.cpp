//
// Carmen Grajeda
// 04/24/2025
// Sorting Benchmarks Programming Project
// COSC 1030
//

// Sorting Benchmark Program 

#include <iostream>

using namespace std;

// Funtion protoypes 
void bubbleSort(int arr[], int size, int& swapCount);
void selectionSort(int arr[], int size, int& swapCount);

int main()
{
    // Variables and array size 
    const int SIZE = 20; // Size of Array
    int array[SIZE] = {29, 10, 14, 37,14, 3, 8, 23, 25, 1, 18, // initilize array with 20 random numbers
                      4, 9, 6, 31, 19, 2, 12, 7, 15};
    int bubbleArray[SIZE]; // Variable for the bubble array
    int selectionArray[SIZE]; // Variable for the selectionArray 

    // Copy the array into both bubble and selection arrays
    for (int i = 0; i < SIZE; ++i)
    {
        bubbleArray[i] = array[i];
        selectionArray[i] = array[i];
    }

    // Variables to keep track of how many swaps 
    int bubbleSwaps = 0;
    int selectionSwaps = 0;

    // Sort array and count swap
    bubbleSort(bubbleArray, SIZE, bubbleSwaps);
    selectionSort(selectionArray, SIZE, selectionSwaps);

    // Display results 
    cout << "Bubble Sort Count: " << bubbleSwaps << endl;
    cout << "Selection Sort Count: " << selectionSwaps << endl;

    return 0;

}

/* bubbleSort function sorts the array 
in ascending order and counts how many times 
elements are swapped */
void bubbleSort(int arr[], int size, int& swapCount)
{
    swapCount = 0; // Reset the counter 

    // Loop through each element
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) // Variable for the scope 
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
            }
        }
    }

}

/* The SelectionSort function finds the 
smallest element and puts it in the correct 
position */
void selectionSort(int arr[], int size, int& swapCount)
{
    swapCount = 0; // Reset the counter 

    // loop through each element 
    for (int i = 0; i < size -1; i++)
    {
        int minIndex = i; // Assuming that the current index is the smallest

        // look for something smaller 
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j; // new smallest
            }
        }
        
        // swap if smaller value 
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;

            // count the swap
            swapCount++; 
        }
    
    }

}

