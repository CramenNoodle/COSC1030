//
// Carmen Grajeda
// 04/16/2025
// Backward String Programming Project
// COSC 1030
//

// Backward string program 

#include <iostream>

#include <cstring>

using namespace std;

// Function Prototype 
void backward(char *);

int main()
{
    // Define an array to hold input 
    const int SIZE = 80;
    char input[SIZE];

    // Get a string from the user.
    cout << "Enter a string and I will display it backwards:\n";
    cin.getline(input, SIZE);

    // Display it backwards
    backward(input);

    return 0;

}

// The backward function accepts a pointer to a c-string 
// and displays that string backward.

void backward(char *str)
{
    // get the subscript of the last character 
    // in the string.
    int last = strlen (str) - 1;

    // Work backward through the string, displaying 
    // each character from the last to the first.
    for (int index = last; index >= 0; index --)
        cout << str[index];

    // End the line. 
    cout << endl;

}
