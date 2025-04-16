//
// Carmen Grajeda 
// 04/16/2025
// Pig Latin Programming Project
// COSC 1030
//

#include <iostream>
#include <sstream> // Header file to break the sentence into words
#include <string> // Header file for the string class
#include <cctype> // Header file for character checking 

using namespace std;

// Function Prototype
bool isALLCaps(const string& str);

int main()
{
    // variables 
    string sentence; // Variable will hold the user's full sentence
    string word; // Variable will hold each word while processing 

    // ask user for input 
    cout << "Enter a sentence in ALL CAPS (from example: HELLO): ";
    getline(cin, sentence); // To read the full line with spcases

    // check to make sure its in all caps
    if (!isALLCaps(sentence))
    {
        cout << "Invalid input: Please enter a sentence using only captial letters: " << endl;
        getline(cin, sentence); // To read full line with spaces 
    }

    // use stringstream to split the sentence into words
    stringstream ss(sentence);

    //display in pig latin 
    cout << "\nPig Latin: ";

    // loop through each word 
    while (ss >> word)
    {
        if (word.length() == 1)
        {
            // special case for one-letter words
            cout << word << "AY";
        }
        else 
        {
            // take the first letter and move it to the end 
            char firstLetter = word[0];
            string rest = word.substr(1); // everuthing except the first letter

            // put it all together and add AY
            string pigLatin = rest + firstLetter + "AY";

            // display the converted word 
            cout << pigLatin << " ";


        }
    }
    // end the line 
    cout << endl;

    return 0;
}

// Function isALLCaps will check and make sure the user
// input is in all caps 
bool isALLCaps(const string& str)
{
    for(char c : str) 
    {
        // skip spaces and punctuation 
        if( isalpha(c) && !isupper(c))
        {
            return false;
        }
    }
    return true;
}
