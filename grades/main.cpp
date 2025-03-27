//
// Carmen Grajeda 
// 03/10/2025
// Grades Programming Project
// COSC 1030
//


/* 
This program will read in grades, find the sum of those grades
and then determine the letter grade of that average based
on a 10-point scale.
*/

#include <iostream>

#include <iomanip>

using namespace std;

// Function prototype 
void calculateAverageGrades(int sum, int count, double &average);

int main()
{
    int numberGrades, grade, sum = 0; // Variables for the grade count, individual grade, and the total sum
    double average; // Variable for the numeric average
    char letterGrade; // Variable for the letter grade

    // Get the number of grades
    cout << "Enter the number of grades: ";
    cin >> numberGrades;

    // Validate the input
    while (numberGrades <= 0)
    {
        cout << "Please enter a number greater than 0: ";
        cin >> numberGrades;
    }

    // Loop to get the grades from the user
    for (int i = 1; i <= numberGrades; i++)
    {
        cout << "Enter Grade " << i << ": ";
        cin >> grade;

        // Validate the grades between 0 and 100
        while (grade < 0 || grade > 100)
        {
            cout << "Incorrect grade. Enter a number between 0 and 100: ";
            cin >> grade;
        }

        // Add the grade to the total sum
        sum += grade; 
    }

    // Call function to pass by reference to calculate the average
    calculateAverageGrades(sum, numberGrades, average);

    // Determine the letter grade
    if (average >= 90)
    {
        letterGrade = 'A';
    }
    else if (average >= 80)
    {
        letterGrade = 'B';
    }
    else if (average >= 70)
    {
        letterGrade = 'C';
    }
    else if (average >= 60)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }


    // format the output
    cout << fixed << setprecision(2);

    // display the result
    cout << "\nTotal sum of the grades: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Final Grade: " << letterGrade << endl;

    return 0;

}

// Function that will calculate the average using pass by reference
void calculateAverageGrades(int total, int count, double &average)
{
    average = static_cast<double>(total) / count; // decimal division 

}

