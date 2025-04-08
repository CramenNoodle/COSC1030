//
// Carmen Grajeda
// 04/08/2025
// Pointer Rewrite Programming Project
// COSC 1030
//

// Pointer Rewrite Program

#include <iostream>

using namespace std;

// Function Prototypes
int doSomething(int*, int*); // Replace the addresses with pointers

int main()
{
    int x = 10, y = 2;

    // Display the values before calling the function.
    cout << "Before calling the function:\n"
         << " x = " << x << endl
         << " y = " << y << endl;

    // Call the function passing x and y
    cout << "The function returns "
         << doSomething(&x,&y) << endl << endl; // Pass the address of x and y

    // Display the values after the function 
    cout << "After calling the function:\n"
         << " x = " << x << endl
         << " y = " << y << endl;

    return 0;

}
// Function that takes two integer pointers, modifies the values, and returns
int doSomething(int *x, int *y) 
{
    // Store the origional value of *x
    int temp = *x;
    // Set *x to 10 times the original value of *y
    *x = *y * 10;
    // Set *y to 10 times the original value of *x stored in temp
    *y = temp * 10;
    // Return the sum of the new *x and *y values
    return *x + *y;
}