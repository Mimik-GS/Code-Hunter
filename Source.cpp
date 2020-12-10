//Gabrianna Falcon
// CodeHunter.cpp : Defines the entry point for the console application.

//#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//The int below sets all everything (letters, spaces, etc.) to zero.
	string textToAnalyze;
	int foo = 0;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	int bar = 0;

	//The next to lines brief the user what the program is and what to do.
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);

	//This sets what the entered text would be regitered as.
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//All of the letters for the next 4 lines, when entered, would be regitered as vowles.
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels;   //The vowels were set to subtract and not add.
		}
		//If the letters are not vowels then every other letter would be labeled as consonants.
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			++consonants;   //This line was commented out of the program.
		}
		//If they are not letters then this sees if they are numbers.
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//This looks for spaces.
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		//If they aren't anything listed above, then they are unknown characters.
		else
		{
			++unknownCharacters;
		}
	}

	//This checks the length of the text and checks the sum of all entered characters.
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//This lists out to the user what all characters have been entered in the approperiate lines.
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//If the sum of the characters have all been accounted for (letters, numbers, spaces, unknowns) the it will give the user the line below.
	//Or else it will give the "Warning" line further below.
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}