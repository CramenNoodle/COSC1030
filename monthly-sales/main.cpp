//
// Carmen Grajeda
// 04/08/2025
// Monthly Sales Programming Project
// COSC 1030
//

// Monthly Sales Program 

#include <iostream>
#include <iomanip>

using namespace std; 

// Function Prototypes
void getSales(double *, int);
double totalSales(double *, int);
double averageSales(double *, int); 

int main()
{
   double *sales = nullptr, // To dynamically allocate an array
           total = 0.0, // Accumulator
           average; // To hold average sales
    int numMonths, // To hold the number of months
        count; // Counter variable

   // Get the number of months 
   cout << "How many months of sales amounts do you want to enter: ";
   cin >> numMonths;

   // Dynmaically allocate an array large enough to hold that many days of sales
   sales = new double[numMonths];

   // Set the numeric output formatting
   cout << fixed << showpoint << setprecision(2);

   // Get the sales amount for each month
   getSales(sales, numMonths);

   // Calculate total and average 
   total = totalSales(sales, numMonths);
   average = averageSales(sales, numMonths);


   // Display the total sales and average sales for the year.
   cout << "\nThe total sales for the year are: $" << total << endl;
   cout << "The average monthly sales are: $" << average << endl;

   // Free dynamically allocated memory
   delete [] sales;

   return 0;

}

/* 
Definition of getSales
This function uses a pointer to accept
the address of an array of doubles. The function asks the user
to enter sales for the month and stores them in the array
*/
void getSales(double*arr, int size)
{
    for(int count = 0; count < size; count++)
    {
        cout << "Enter the sales for month ";
        cout << (count + 1 ) << ": ";
        cin >> arr[count];
    }
}

/* 
Definition for totalSales
This function uses a pointer to accept the address of an array. The function returns the total
of the elements in the array.
*/
double totalSales(double *arr, int size)
{
    double sum = 0.0;

    for (int count = 0; count < size; count++)
    {
        sum += arr[count];
    }
    return sum;
}

/*
Definition for averageSales 
This function returns the average of the sales in the array
*/
double averageSales(double *arr, int size)
{
    double total = totalSales(arr, size);
    return total / size;
}