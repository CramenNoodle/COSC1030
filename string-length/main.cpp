//
// Carmen Grajeda
// 04/25/2025
// String Length Programming Project
// COSC 1030
//

// String Length Program 

#include <iostream>

using namespace std; 

// Function prototype
int countCharacters(char* str);

int main()
{
    // Variables 
    const int SIZE = 100; // Variable for max input length
    char input[SIZE]; // Variable to hold the users input 

    // ask the user for input 
    cout << "Enter a string: ";
    cin.getline(input, SIZE); 

    // call function and store results
    int numChars = countCharacters(input);

    // Display the results
    cout << "The number of characters in the string is: " << numChars << endl;

    return 0;

}

/* This function takes a pointer to a char array 
and counts how many characters are in the string, 
excluding the null terminator.*/
int countCharacters(char* str)
{
    int count = 0;

    // loop through string 
    while(str[count] != '\0')
    {
        count++; // count each character
    }

    // Return total number of characters
    return count; 
}

